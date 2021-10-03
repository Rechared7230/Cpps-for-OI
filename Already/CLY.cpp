//h(x) = x mod 34337
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[3]={1};
string s="ArCl";
void Hash(string str){
    string cac="Hash";
    if(str[0]=="A"&&str[1]=="r")cac="y";
    string strfinal:
    for(int i=0;i<2;i++)strfinal+=str[i+3];
    strfinal+=cac;
    int hash;
    for(int i=0;i<strfinal.length();i++)
        hash+=strfinal[i].c_str()-'a'+1;
    return hash;
}
void ad(int num,int n){
    if(n==4)return ;
    a[n]=num;
    ad(num*num,n+1);
    return;
}
int main(){
    int x;
    ad(11,2);
    x=Hash(s);
    cout<<"\n"<<x%34337;
    return 0;
}
