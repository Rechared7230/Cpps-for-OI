#include<iostream>

using namespace std;
int res;
int a[26][26];
int vis[26][26];//1 0
int q,w;
int n,m;
void dfs(int x,int y){
    if(x==x&&y==m){res++;return ;}
    if(x>=n||y>=m)return;
    if(!vis[x+1][y]){
        vis[x+1][y]=1;
        dfs(x+1,y);
        vis[x+1][y]=0;
    }
    if(!vis[x][y+1]){
        vis[x][y+1]=1;
        dfs(x,y+1);
        vis[x][y+1]=0;
    }
}
int main(){
    //int n,m;
    cin>>n>>m>>q>>w;
    vis[q][w]=1;
    if(q-1>=0&&w-2>=0)vis[q-1][w-2]=1;
    if(q-1>=0)vis[q-1][w+2]=1;
    if(w-2>=0)vis[q+1][w-2]=1;
    vis[q+1][w+2]=1;
    if(q-1>=0&&w-1>=0)vis[q-2][w-1]=1;
    if(q-2>=0)vis[q-2][w+1]=1;
    if(w-1>=0)vis[q+2][w-1]=1;
    vis[q+2][w+1]=1;
    dfs(0,0);
    cout<<res;
    return 0;

}