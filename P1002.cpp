#include<iostream>

using namespace std;
int a[22][22];
bool vis[22][22];
int cgx[4]={0,1,0,-1};
int cgy[4]={1,0,-1,0};
int n,m;
int x1,y2;
int ans=0;
void dfs(int x,int y){
    if(x==n&&y==m){ans++;return ;}
    if(x>n || y>m)return ;
    for(int i=0;i<4;i++){
        if(!vis[x+cgx[i]][y+cgy[i]]){
            dfs(x+cgx[i],y+cgy[i]);
        }
    }
    return;
}
int main(){
    cin>>n>>m;
    cin>>x1>>y2;
    vis[x1][y2]=1;
    dfs(0,0);
    cout<<ans;
    return 0;
}