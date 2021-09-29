#include<iostream>
#include<algorithm>
using namespace std;
int a[101];
int b[101];
int main(){
    int n;
    cin>>n;
    a[1]=b[1]=-0x7f7f;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    int num=0;
    for(int i=1;i<=n;i++){
        if(a[i]==a[i-1])continue;
        b[num]=a[i];
        num++;
    }
    cout<<num<<endl;
    for(int i=0;i<num;i++)cout<<b[i]<<" ";
    return 0;  
}