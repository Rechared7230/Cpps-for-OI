#include<iostream>
using namespace std;
int res;
void dfs(int n){
    if(n==0){res++;return ;}
    if(n<0)return;
    dfs(n-1);
    dfs(n-2);

}
int main(){
    int n;
    cin>>n;
    dfs(n);
    cout<<res;
    return 0;
}