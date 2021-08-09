#include<iostream>
#include<cmath>
using namespace std;
int f[1000];
int a[1000];
int main(){
    int max,k;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    f[0]=0;
    for(int i=1;i<=n;i++){
        max=k=0;
        for(int j=i-1;j>0;j--){
            if(a[i]>a[j] && f[j]>=max)max=f[j],k=j;
        }
        f[i]=f[k]+1;
    }
    max=0;
    for(int i=1;i<=n;i++)if(f[i]>max)max=f[i];
    cout<<max;
    return 0;
}