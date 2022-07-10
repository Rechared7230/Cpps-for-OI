#include<iostream>

using namespace std;
int gcd(int a,int b){
    return (b==0)?a:gcd(b,a%b);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
    return 0;
}
/*
    f[0]=0;
    f[1]=1;
    f[n]=f[n-1]+f[n-2];

*/