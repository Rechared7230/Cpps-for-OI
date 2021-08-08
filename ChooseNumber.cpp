//FUCKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK!
#include<iostream>
#include<cmath>
using namespace std;
int a[20];
bool ck[20];
int n;
int ans;
bool isss(int num){
    for(int i=0;i<sqrt(num);i++){
        if(!num%i){return false;}
    }
    return true;
}
int cac;
int dfs(int nu){
    if(nu==0){
        if(isss(cac))ans++;
        return ;
    }

}
int main(){
    int k;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    dfs(k);
    return 0;
}