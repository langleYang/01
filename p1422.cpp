#include<cstdio>

int main(){
	int total;
	double costs;
	scanf("%d",&total);
	if(total>=401) 
		costs=(total-400)*0.5663+250*0.4663+150*0.4463;
	else if(total>=151)
		costs=(total-150)*0.4663+150*0.4463;
	else costs=total*0.4463;
	printf("%.1f",costs);
	return 0;
}
	
