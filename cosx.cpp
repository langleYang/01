#include<stdio.h> //cpp�ļ�����notepad ���±���
#include<math.h>
double funcos(double e,double m);
double fact(int n);
int main(void) //�����������xΪ���ȣ�����������������ֵ����Ƕȣ��мǻ������⣬����Ĳ��С����� 
{
	double e,s,x; //�ҷ��� ���������� 
	printf("Enter e and x.\n");
	scanf("%lf%lf",&e,&x); //lf ��Ӧdouble f��Ӧfloat �м� 
	s=funcos(e,x);
	printf("%lf",s); //��������ʹ��ʮ����Ҫ���˴������� 
	return 0;
	
}
double funcos(double e,double m)
{
	int n=0,flag=1;
	double s=0,item,k,b=1;
	do{                               //�ȼ�������ٱȽ� �������������� 
		k=pow(m,n);
		item=flag*k/b;
		n=n+2;
		b=fact(n);
		s=s+item;	
		flag=flag*-1;
		printf("%f,%f��%d\n",item,s,n);
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
