#include<iostream>

using namespace std;
int an[200090];
long long ans=0;
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>an[i];
        sum+=an[i];
    }
    for(int i=0;i<n;i++){
        ans+=an[i]*(sum-an[i]);
        sum-=an[i];
    }
    cout<<ans;
    return 0;
}