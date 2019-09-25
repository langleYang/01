#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[100][11];
	char c[2]="0";
	int i=0;
	while(1){
		cin>>a[i];
		if(!strcmp(a[i],c)) break;
		i++;
	}
	for(i=i-1;i>0;i--)
		cout<<a[i]<<' ';
	cout<<a[0]<<endl;
	return 0;
}
	
