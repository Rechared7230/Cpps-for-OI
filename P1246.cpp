#include<bits/stdc++.h>
using namespace std;
string s;
int ans,n;
int c(int m,int n)//��������� 
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
		if(s[i]<=s[i-1])cout<<0,exit(0);//�ж��Ƿ����
	for(int i=1;i<n;i++)ans+=c(i,26);//�����λ������С�ĵ�����
	for(int i=0;i<n;i++)//ö��ÿһλ
		for(char j=(i==0?'a':s[i-1]+1);j<s[i];j++)//ע�⿼�Ǳ߽�
			ans+=c(n-i-1,'z'-j);//��Ϊ�ַ����±��0��ʼ��������n-i-1������n-i
	cout<<++ans;//�����������Լ�����
	return 0;
}
