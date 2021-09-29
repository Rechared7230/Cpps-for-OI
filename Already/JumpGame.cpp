#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
const int N=100;
int main(){
    int n;
    cin>>n;
    int a[N];
    bool ck[N];
    memset(ck,0,sizeof(ck));
    for(int i=0;i<n;i++)cin>>a[i];
    int tar;
    cin>>tar;
    ck[0]=1;
    for(int i=0;i<tar;i++){
        if(ck[i]){
            for(int j=i;j<=i+a[i];j++){
                ck[j]=true;
            }
        }
    }
    for(int i=0;i<=tar;i++)cout<<ck[i];
    cout<<endl;

    if(ck[tar])cout<<"Yes!!!";
    else cout<<"No!!!";
    return 0;
}