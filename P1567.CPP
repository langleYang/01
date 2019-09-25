#include <cstdio>
long int a[10000010];
int main(){
	int n,tmp=0,max=1,cnt=1;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%ld",&a[i]);
		if(a[i]>tmp) cnt++;
		else {
			if(max<cnt) max=cnt;
			cnt=1;
		}
		tmp=a[i];
	}
	printf("%d",max);
	return 0;
}
