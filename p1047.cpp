#include<iostream>
#include<cstring>
using namespace std;
int a[10010];

int main(){
	int l,m,t1,t2,cnt=0;
	cin>>l>>m;
	memset(a,0,sizeof(int)*10010);
	for(int i=0;i<m;i++){
		cin>>t1>>t2;
		while(t1<=t2){
			a[t1]=1;
			t1++;
		}
	}
	for(int j=0;j<=l;j++){
		if(!a[j]) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
