#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
struct pep{
    string name;
    int y,m,d;
    int sx;
}a[101];
bool cmp(pep a,pep b){
    
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i].name>>a[i].y>>a[i].m>>a[i].d;a[i].sx=i;}
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)cout<<a[i].name<<endl;
    return 0;
}