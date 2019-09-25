#include<cstdio>
#include<cmath>

int main(){
	int n,price,min=0,tmpp,num,tmp;
	scanf("%d",&num);	
	for(int i=0;i<3;i++){
		scanf("%d %d",&n,&price);
		tmp=num/n;
		if(num%n) tmp++;	
		tmpp=tmp*price;
		if(i==0){
			min=tmpp;
		}
		if(min>tmpp){
			min=tmpp;
		}
	}
	printf("%d",min);
	return 0;
}


		
		
