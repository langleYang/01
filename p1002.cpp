/*NOI
LG1002 ������
Simple Recursion. 

*/

#include<iostream>
using namespace std; //�ݹ������,�����ٶȳ��� 

//int total; 
int end_r,end_c;  //��¼B��
int hourse_r,hourse_c;  //��¼������λ��
int terr[9][2]={{0,0},{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
long long ma[100][100];

//void DFS(int a,int b){
	
//}
	/*if(ma[a][b]==0){
		if(a+1<=end_r) DFS(a+1,b);
		if(b+1<=end_c) DFS(a,b+1);
		if(a==end_r&&b==end_c) total++;	//totalΪȫ�ֱ���*/ 
		
int main()
{
	int a=0,b=0;
//	int flag=1;
	cin>>end_r>>end_c>>hourse_r>>hourse_c; 

	for(int i=0;i<=end_r;i++){
		for(int j=0;j<=end_c;j++)
			ma[i][j]=1;
			
}
	for(int i=0;i<9;i++) 
		if(hourse_r+terr[i][0]<0 || hourse_c+terr[i][1]<0 ) continue;//�����Ŀ��Ʒ�Χ,һ��Ҫ�����±��� 
		else ma[hourse_r+terr[i][0]][hourse_c+terr[i][1]]=0;
//	DFS(0,0);  //��ʼ����

	for(a=0;a<=end_r;a++){
		for(b=0;b<=end_c;b++)
			if(ma[a][b]){
				if(a==0&&b==0) continue;
				else if(a==0) ma[a][b]=ma[a][b-1];
				else if(b==0) ma[a][b]=ma[a-1][b];
				else ma[a][b]=ma[a][b-1]+ma[a-1][b];
				
			}
		
	}
//	if((end_r==hourse_r) && (end_c==hourse_c)) cout<<0;		
	cout<<ma[end_r][end_c];  //������
	return 0;
}


