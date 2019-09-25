#include<cstdio>

int main(){
	int a[8],max=0,ans;
	for(int i=1;i<8;i++){
		int t1,t2;
		scanf("%d %d",&t1,&t2);
		a[i]=t1+t2;
		if(max<a[i]){
			max=a[i];
			ans=i;
		}
	}
	printf("%d",ans);
	return 0;

}