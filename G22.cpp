#include <bits/stdc++.h>
using namespace std;

int dp[550]={0};

int main(){
    int n;
    cin>>n;
    n*=10;
    dp[1]=1;
    dp[0]=1;
    for(int i=2;i<=n;i++){
		if(i-1>=0)dp[i]+=dp[i-1]+1;
		if(i-2>=0)dp[i]+=dp[i-2]+1;
		if(i-8>=0)dp[i]+=dp[i-8]+1;
	}
	cout<<dp[n];
    return 0;
}
