#include<iostream>
using namespace std;
const int M=10000000;
bool ck[M+1]={};//0zhi 
int a[M];
int main(){
    int cnt=1;
    for(int i=2;i<=M;i++){
        if(ck[i]==0){
            a[cnt]=i;
            cnt++;
            for(int j=2;j<=M/i;j++){
                ck[i*j]=1;
            }
        }
    }
    cout<<cnt-1;
    return 0;
}