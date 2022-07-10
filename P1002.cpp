#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int p[21][21];
int main(){
    memset(p,0,sizeof(p));
    int a,b,n,m;
    cin>>a>>b>>n>>m;
    for(int i=1;i<=20;i++){
        p[1][i]=1;
    }
    for(int i=1;i<=20;i++){
        p[i][1]=1;
    }
    for(int i=2;i<=a;i++){
        for(int j=2;j<=b;j++){
            if(n-i+m-j!=3){
                p[i][j]=p[i][j-1]+p[i-1][j];
            }
        }
    }
    cout<<p[a][b];
    return 0;
}