#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;//From 0,0 to n,m
    int a[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0){
                a[i][j]=1;
            }
            else a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n][m];

    return 0;
}