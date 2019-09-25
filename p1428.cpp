#include<iostream>
#include<cstring>
using namespace std;


int main(){
	int n;
	int a[100],b[100];
	cin>>n;
	memset(b,0,sizeof(int)*100);
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=0;j<i;j++){
			if(a[j]<a[i]) b[i]++;
		}
	}
	for(int k=0;k<n-1;k++) cout<<b[k]<<' ';
	cout<<b[n-1]<<endl;
	return 0;
}