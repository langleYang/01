#include<iostream>
using namespace std;

int main(){
	int a[10],h,cnt=0;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cin>>h;
	h+=30;
	for(int j=0;j<10;j++){
		if(h>=a[j]) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}


