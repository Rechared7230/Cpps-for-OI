#include<iostream>

using namespace std;
int a[10009][10009];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];

    return 0;
}