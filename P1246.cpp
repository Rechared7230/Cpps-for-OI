#include<bits/stdc++.h>
using namespace std;
string s;
int ans,n;
int c(int m,int n)//组合数计算 
{
	if(m==0)return 1;
	int mut=1;
	for(int i=n;i>n-m;i--)mut*=i;
	for(int i=m;i>1;i--)mut/=i;
	return mut;
}
int main()
{
	cin>>s,n=s.size();
	for(int i=1;i<n;i++)
		if(s[i]<=s[i-1])cout<<0,exit(0);//判断是否存在
	for(int i=1;i<n;i++)ans+=c(i,26);//计算出位数比它小的单词数
	for(int i=0;i<n;i++)//枚举每一位
		for(char j=(i==0?'a':s[i-1]+1);j<s[i];j++)//注意考虑边界
			ans+=c(n-i-1,'z'-j);//因为字符串下标从0开始，所以是n-i-1而不是n-i
	cout<<++ans;//别忘了最后把自己加上
	return 0;
}
