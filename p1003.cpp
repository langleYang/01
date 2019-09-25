/* NOI 
LG P1003 ÆÌµØÌº
simple simulate.

*/
	
#include<iostream>
#include<list>

using namespace std;
	
struct floor{
	int a,b;
	int g,k;
	int no;
}carpet;
	
int main(){
	list<floor> all;
	list<floor>::iterator it;
	int n,i=0,q,p,sign=-1,ans=-1;
	int tmpx,tmpy,tmpxx,tmpyy;
	cin>>n;
	while(i!=n){
		cin>>carpet.a>>carpet.b>>carpet.g>>carpet.k;
		carpet.no=i+1;
		all.push_back(carpet);
		i++;		
	}
	
	it=all.begin();
	cin>>q>>p;
	while(it!=all.end()){
		tmpx=it->a,tmpy=it->b;
		tmpxx=tmpx+(it->g),tmpyy=tmpy+(it->k);
		if(q>=tmpx && q<=tmpxx && p>=tmpy && p<=tmpyy){
			sign=it->no;
			if(ans<sign) ans=sign;
		}
		it++;		
	}
	cout<<ans;
	return 0;
}
