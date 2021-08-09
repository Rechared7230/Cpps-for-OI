#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int a[1000][1000];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[i][j]=max(a[i-1][j],a[i][j-1])+a[i][j];
        }
    }
    cout<<a[n][m];
    return 0;
}