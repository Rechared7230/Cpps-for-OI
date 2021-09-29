#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int a[101][101];
int b[101][101];
const int N=0x7f7f;
int r,c;
int main(){
    cin>>r>>c;
    memset(a,N,sizeof(a));
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++)cin>>a[i][j];
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            //b[i][j]=max(b[i][j],);
            if(a[i][j])
        }
    }
    return 0;
}