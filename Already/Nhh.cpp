#include<iostream>
using namespace std;
int a[13];//a[i]:- i  | a[i]
int n;
int ans;
bool check(int row,int n){
    for(int i=0;i<row;i++){
        if(a[i]==n)return false;
        if(row+n==a[i]+i)return false;
        if(row-n==i-a[i])return false;
    }
    return true;
}
void dfs(int row){
    if(row==n){
        ans++;
        return;
    }
    for(int i=0;i<n;i++){
        if(check(row,i)){
            a[row]=i;
            dfs(row+1);
            a[row]=0;
        }
    }
}
int main(){
    cin>>n;
    dfs(0);
    cout<<ans;
    return 0;
}