#include<iostream>
using namespace std;
int a[7];
int j[7];
int main(){
    int n;cin>>n;
    for(int i=0;i<7;i++)cin>>a[i];
    int num,res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>num;
            for(int k=0;k<7;k++){
                num==a[k]? res++ : res+=0;
            }
        }
        j[res]++;
        res=0;
    }
    for(int i=6;i>=0;i++)cout<<j[i]<<" ";
    return 0;
}