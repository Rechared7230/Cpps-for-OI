#include<iostream>
using namespace std;
int main(){
    int C[10001];
    int n,m;
    cin>>m>>n;
    C[0]=1;
    if (m>n-m) m=n-m;
    for (int i=1;i<=m;i++)
    C[i] = (n-i+1) * C[i-1] / i;
    return 0;
}