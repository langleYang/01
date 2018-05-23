#include<stdio.h> //cpp文件经过notepad 重新编码
#include<math.h>
double funcos(double e,double m);
double fact(int n);
int main(void) //本函数计算的x为弧度，而常规计算器输入的值代表角度，切记换算问题，我真的不行。。。 
{
	double e,s,x; //我服了 这个程序真怪 
	printf("Enter e and x.\n");
	scanf("%lf%lf",&e,&x); //lf 对应double f对应float 切记 
	s=funcos(e,x);
	printf("%lf",s); //计算器的使用十分重要，此处。。。 
	return 0;
	
}
double funcos(double e,double m)
{
	int n=0,flag=1;
	double s=0,item,k,b=1;
	do{                               //先计算出，再比较 ，不可无中生有 
		k=pow(m,n);
		item=flag*k/b;
		n=n+2;
		b=fact(n);
		s=s+item;	
		flag=flag*-1;
		printf("%f,%f，%d\n",item,s,n);
	}while(fabs(item)>=e);
	return s;
}
double fact(int n)
{
	double s=1;
	for(int i=1;i<=n;i++){
		s=s*i;
	}
	return s;
}
