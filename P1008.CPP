#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int	t2,t3;
	int a[3][3],sign[10];

	for(int i=123;i<330;i++){
		int flag=0;
		memset(sign,0,sizeof(int)*10);
		a[0][0]=i%10;
		a[0][1]=(i/10)%10;
		a[0][2]=i/100;
		if(a[0][0]!=a[0][1]&&a[0][0]!=a[0][2]&&a[0][1]!=a[0][2]){
			t2=2*i,t3=3*i;
			a[1][0]=t2%10;
			a[1][1]=(t2/10)%10;
			a[1][2]=t2/100;
			a[2][0]=t3%10;
			a[2][1]=(t3/10)%10;
			a[2][2]=t3/100;
			for(int j=0;j<3;j++){
				for(int l=0;l<3;l++){
					sign[a[j][l]]=1;
				}
			}
			for(int k=1;k<=9;k++){
				if(!sign[k]){
					flag=1;
				}
			}
			if(!flag) cout<<i<<' '<<t2<<' '<<t3<<endl;
		}
			
	}
	return 0;
}
