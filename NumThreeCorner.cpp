#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000][1000];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]+=max(a[i-1][j-1],a[i-1][j]);
        }
    }
    int ans;
    for(int i=1;i<=n;i++){
        ans=max(ans,a[n][i]);
    }
    cout<<ans;
    
    return 0;
}