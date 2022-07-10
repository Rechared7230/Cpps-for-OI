#include<iostream>

using namespace std;
int n;
int dp[10000009];
unsigned long long ans=0;
int main(){
    cin>>n;
    dp[0]=0;
    dp[1]=0;
    dp[2]=2;
    dp[3]=1;
    for(int i=4;i<=n;i+=3){
        dp[i]=dp[i-1]+1;
        dp[i+2]=dp[(i+2)/3]+1;
        dp[i+1]=dp[i+2]+1;
    }
    for(int i=0;i<=n;i++)ans+=dp[i];
    cout<<ans;
    return 0;
}