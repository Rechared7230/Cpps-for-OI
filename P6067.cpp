#include<iostream>

using namespace std;
long long dist=0,mn=0;
long long ans=0;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long a;
        cin>>a;
        mn=a*(i-1);
        ans+= labs(dist-mn);
        dist+=a;
    }
    cout<<ans;
    return 0;
}