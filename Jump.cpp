#include<iostream>
#include<cmath>
using namespace std;
struct ban{
    int y,l,r;
}a[500000];
int num[500000];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].y>>a[i].l>>a[i].r;
    }
    num[1]=0;
    for(int i=1;i<n;i++){
        for(int j=a[i].l;j<=a[i].r;j++){
            num[j]=max(num[j],num[i]+j-i+abs(a[j].y-a[i].y));
        }
    }
    //for(int i=1;i<=n;i++)cout<<num[i]<<" ";

    cout<<num[n];
    return 0;
}