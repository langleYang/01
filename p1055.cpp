#include<iostream>
using namespace std;

int main(){
	string isbn;
	cin>>isbn;
	int a[11],j=1,cdn=0,ans=0;
	for(int i=0;i<int(isbn.length());i++){
		if(isbn[i]>='0'&&isbn[i]<='9'){
			a[j]=isbn[i]-'0';
			j++;
		}
	}
	for(int i=1;i<10;i++){
		cdn+=(i*a[i]);
	}
	ans=cdn%11;
	//×¢ÒâÉóÌâ
	char c=isbn[isbn.length()-1];
	char tmp;
	if(ans==10) tmp='X';
	else
		tmp = '0' + ans;

	isbn=isbn.substr(0,isbn.length()-1);
	if(tmp==c) cout<<"Right";
	else cout<<isbn<<tmp<<endl;
	return 0;
}