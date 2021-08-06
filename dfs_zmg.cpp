#include<iostream>
using namespace std;
int a[100][100];//1false 0 true
bool visit[100][100];
int stn,stm,edn,edm;
int n,m;
int minn=0xf7f7f7;
void dfs(int x,int y,int pathlength){
    if(x==edn&&y==edm){
        if(minn>pathlength)minn=pathlength;
        return ;
    }
    //left
    if(!a[x][y-1] && !visit[x][y-1] && x,y-1>=1 && x<=n && y-1<=m){
        visit[x][y-1]=1;
        dfs(x,y-1,pathlength+1);
        visit[x][y-1]=0;
    }
    //right
    if(!a[x][y+1] && !visit[x][y+1] && x,y+1>=1 && x<=n && y+1<=m){
        visit[x][y+1]=1;
        dfs(x,y+1,pathlength+1);
        visit[x][y+1]=0;
    }
    //up
    if(!a[x-1][y] && !visit[x-1][y] && x-1,y>=1 && x-1<=n && y<=m){
        visit[x-1][y]=1;
        dfs(x-1,y,pathlength+1);
        visit[x-1][y]=0;
    }
    //down
    if(!a[x+1][y] && !visit[x+1][y] && x+1,y>=1 && x+1<=n && y<=m){
        visit[x+1][y]=1;
        dfs(x+1,y,pathlength+1);
        visit[x+1][y]=0;
    }

}
int main(){
    
    cin>>n>>m;//a[n][m]
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int stn,stm,edn,edm;
    cin>>stn>>stm>>edn>>edm;
    dfs(stn,stm,0);
    cout<<minn;
    return 0;
}