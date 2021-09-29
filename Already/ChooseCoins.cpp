#include<iostream>
#include<cmath>
using namespace std;
const int N=0xf7f7f;
int main(){
    //MEMSET(A,N);
    int a[30]={0,N,1,N,2,1,3,1,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N};
    int b[3]={2,5,7};
    //int res=N;
    for(int i=8;i<=27;i++){
        //a[i]=min(res,min(a[i-2]+1,min(a[i-5]+1,a[i-7]+1)));
        for(int j=0;j<3;j++){
            a[i]=min(a[i],a[i-b[j]]+1);
        }
    }
    cout<<a[27];
    return 0;
}