#include<cstdio>

int main(){
	double s,step=2;
	int n=0;
	scanf("%lf",&s);
	while(1){
		++n;
		s-=step;
		if(s<=0){
			break;
		}
		step*=0.98;
	}
	printf("%d",n);
	return 0;

}
