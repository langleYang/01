//进行字符串匹配的kmp算法
//洛谷P1308

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int answer[2];
//brutefore to find pattern string
int bruteforce(string s, string ps)
{
    int i = 0, j = 0, cnt = 0, flag = 1, first_a = -1;

    while (i < s.length())
    {
        if (s[i] == ps[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i - j + 1; //j from o to n; n=length-1
            j = 0;
        }

        if (j == ps.length())
        {
            if (i == s.length() || isspace(s[i]))
            {
                if (i - j == 0 || isspace(s[i - j - 1]))
                {
                    cnt++;
                    //cnt++;
                    if (flag){
                        first_a = i - ps.length();
                        flag = 0;
                    }   
                }
            }
        }
    }
    answer[0] = first_a, answer[1] = cnt;
    return first_a;
}

//PMT(Partial Match Table) 部分匹配表
//PMT中的值是字符串的前缀集合与后缀集合的交集中最长元素的长度。
//为了编程的方便， 我们不直接使用PMT数组，而是将PMT数组向后偏移一位。我们把新得到的这个数组称为next数组。
//保持s字符串中的指针i不动，仅仅移动j指针；
//最前面的k个字符 和 j之前的最后 k个字符 是一样的。

//求next数组的过程完全可以看成字符串匹配的过程，即以模式字符串为主字符串，以模式字符串的前缀为目标字符串.
//一旦字符串匹配成功，那么当前的next值就是匹配成功的字符串的长度。

int *getNext(string ps){
    int *next=new int [ps.length()];
    next[0] = -1;
    // when P[k] == P[j]，
    // 有next[j+1] == next[j] + 1
    int k = -1, j = 0;
    while(j+1<ps.length()){
        if (k == -1|| ps[k]==ps[j]){
            // next[++j] = ++k; //++ before parameter ,先自加后取值
            if(ps[++j]==ps[++k]){ 
            // 出现这种情况时，当++j处的字符与++k处的相同时，如果在对j进行匹配时出现不相符，则k处必然也不相符
            // 此处为kmp算法的improvement
                 next[j] = next[k];
            }
            else
                next[j] = k;
        }
        else
            k=next[k];
    }
    return next;
}


int kmp(string s,string ps){
    int *next = getNext(ps);
    int i = 0, j = -1, cnt = 0,result=-1;
    while(i<s.length()){
        if(j==-1||s[i]==ps[j]){ //next数组的第一个值为-1.当j=next[j]后，获得-1时，意味着j已经在ps的顶端，需要对i进行后移
            i++, j++;
        }
        else{
            j = next[j];
        }
        if(j==ps.length()){
            if(i==s.length()||isspace(s[i])){
                if(i-j==0||isspace(s[i-j-1])){
                    cnt++;
                    if(cnt==1)
                        result = i - j;
                }
            }
            j = -1;
        }
    }
    answer[0] = result, answer[1] = cnt;
    delete[] next;
    return result;
} 

int main()
{
    string s, ps;
    // freopen("D:/test1.txt")
    ifstream fin("D:/test1.txt");

    getline(fin, ps);
    getline(fin, s);

    transform(ps.begin(), ps.end(), ps.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    //cout << ps<<ps.length() << '\n'<< s;
    int result = kmp(s, ps);
    if (result == -1)
    {
        cout << -1;
    }
    else
        cout << answer[1] << ' ' << answer[0];
    getchar();
    return 0;
}