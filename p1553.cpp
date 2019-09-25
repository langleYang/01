#include<iostream>
#include<string>
using namespace std;

int main(){
	string num;
	int i,j,flag,tmp;
	cin>>num;
	int size=num.length();
	for(i=0;i<size;i++){	
		if(num[i]=='.'||num[i]=='/'||num[i]=='%') break;
	}
	flag=0;
	for(j=i-1;j>=0;j--){
		if(flag==0 && num[j]=='0') continue;
		else if(i==1){ 
			cout<<num[0];
			break;
		}
		else {
			flag=1;
			cout<<num[j];
		}
	}
	if(size!=i){
		cout<<num[i];
		flag=0;
		if(num[i]!='.'){
			for(j=size-1;j>i;j--){
				if(flag==0 && num[j]=='0') continue;
				else {
					flag=1;
					cout<<num[j];
				}
			}
		}
		else{
			for(tmp=i+1;tmp<size;tmp++){
				if(num[tmp]!='0'){
					break;
				}
			}
		}
	}
}