#include<iostream>
#include<cmath>
using namespace std;
int va[27];
long long d[10020];
int main(){
    long long v,n;
    cin>>v>>n;
    for(int i=0;i<v;i++)cin>>va[i];
    d[0]=1;
    for(int i=0;i<v;i++){
        for(int j=va[i];j<=n;j++){
            d[j]+=d[j-va[i]];
        }
    }
    cout<<d[n];
    return 0;
}