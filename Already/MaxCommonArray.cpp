#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int f[1000][1000];
int main(){
    string a,b;
    cin>>a>>b;
    for(int i=1;i<=a.length();i++){
        for(int j=1;j<=b.length();j++){
            if(a[i]==b[j])f[i][j]=f[i-1][j-1]+1;
            f[i][j]=max(f[i][j-1],max(f[i][j],f[i-1][j]));
        }
    }
    cout<<f[a.length()][b.length()];
    return 0;
}