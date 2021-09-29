#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
string ss[22];
bool cmp(string a,string b){
    int l=min(a.length(),b.length());
    for(int i=0;i<l;i++){
        if(a[i]==b[i])continue;
        else return a[i]>b[i];
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>ss[i];
    sort(ss,ss+n,cmp);
    string s;
    for(int i=0;i<n;i++)s+=ss[i];
    cout<<s;
    return 0;
}