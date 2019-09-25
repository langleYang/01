#include<iostream>
using namespace std;

int main(){
	int n,x,cnt=0,tag;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		int j=i;
		while(j!=0){
			tag=j%10;
			j/=10;
			if(tag==x) cnt++;
		}	
	}
	cout<<cnt;
	return 0;	
}
