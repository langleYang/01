#include<cstdio>

int main(){
	int a,b,c,d,e,f,tmp;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	a=a*60+b;
	c=c*60+d;
	tmp=c-a;
	e=tmp/60;
	f=tmp%60;
	printf("%d %d",e,f);
	return 0;
}

