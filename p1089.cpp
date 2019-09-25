#include<cstdio>

int main(){
	int cost,x=0,last=0,bank=0,tmp;
	for(int i=1;i<=12;i++){
		scanf("%d",&cost);
		last=last+300-cost;
		if(last<0) 
		{
			x=-1*i;
		}
		if(last>=100){
			tmp=last/100;
			bank+=tmp;
			last=last-tmp*100;
		}
	}
	if(x==0)
		printf("%d",bank*120+last);
	else 
		printf("%d",x);
	return 0;
}

			
