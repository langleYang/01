#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string s,key;
	int first_=-1,count=0,cnt=-1,flag=1,tmp=0;
	cin>>key;
	transform(key.begin(),key.end(),key.begin(),::tolower);
	getline(cin,s);
	getline(cin,s);

	cout << s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	int key_leng=key.length();
	int leng=s.length();
	s.find()
	// for(int i=0;i<leng;i++){
	// 	if(s[i]==key[0]){
	// 		tmp=i;
	// 		int keycnt=1;
	// 		for(int j=0;j<i+key_leng-1;j++){
	// 			if(s[j]==key[keycnt])keycnt++;
	// 			else break;
	// 			if(keycnt==key_leng-1&&s[j+1]==' ') {
	// 				count++;
	// 				flag=0;
	// 			}
	// 		}
	// 		if(flag) first_=tmp;
			
	// 	}
	// }
	
	
//	while(cin>>s){
//		transform(s.begin(),s.end(),s.begin(),::tolower);
//        
//		if(key==s) {
//			if(first_==-1){
//				first_=cnt+1;
//				flag=0;
//			}
//			count++;
//		}
//		if(flag) cnt+=s.length()+1;	
//	}
	if(first_==-1){
		cout<<-1<<endl;
	}
	else cout<<count<<' '<<first_<<endl;
	return 0;
} 
