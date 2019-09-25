#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[110],n,cnt=0,left,right,tmp;
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>a[j];
	}

	sort(a,a+n);
	for(int i=2;i<n;i++){
		left=0;
		right=i;
		while(left!=right){
			tmp=a[left]+a[right];
			if(a[i]<tmp) right--;
			else if(a[i]>tmp) left++;
			else if(a[i]==tmp&&left!=right)
			{
				cnt++;
				break;
				//求多少个数,不是多少组合
				//QAQ
				//cout<<a[i]<<endl;
			}
		}
	//two pointers	
	}
	cout<<endl<<cnt<<endl;
	return 0;
}
