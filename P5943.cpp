#include<iostream>

using namespace std;
int mp[2009][2009];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a;
            cin>>a;
            mp[i][j]=mp[i][j-1]+mp[i-1][j]-mp[i-1][j-1]+a;
        }
    }
    int maxn;
    for(int i=1;i<=n;i++){
        
    }
    return 0;
}