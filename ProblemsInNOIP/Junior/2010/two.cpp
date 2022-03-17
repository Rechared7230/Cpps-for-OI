#include<iostream>

using namespace std;

int ans=0;
int ck(int n){
    int num=0;
    while(n){
        if(n%10==2)num++;
        n/=10;
    }
    return num;
}
int main(){
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        ans+=ck(i);
    }
    cout<<ans;
    return 0;
}