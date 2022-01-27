#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
struct point{
    int x,y;
};
int cx[4]={0,0,1,-1};
int cy[4]={1,-1,0,0};
point st[1010];
char map[2010][2010];
bool vis[2010][2010];
int n,m;int a,b,c,d;
unsigned long long ans;
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m>>a>>b>>c>>d;
    int num;
    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=m+1;j++){
            cin>>map[i][j];
            if(map[i][j]=='S'){
                num++;
                st[num].x=i;
                st[num].y=j;
            }
        }
    }
    point pt;
    bool flag=false;
    unsigned long long aaa=10000;
    for(int i=0;i<num;i++){
        queue<point>q;
        pt.x=st[0].x;
        pt.y=st[0].y;
        q.push(pt);
        while(!q.empty()){
            for(int j=0;j<4;j++){
                if(map[pt.x+cx[j]][pt.y+cy[j]]=='#')continue;
                int x=pt.x+cx[j];
                int y=pt.y+cy[j];
                if(map[x][y]=='|'){
                    aaa+=a;
                    q.pop();
                }
                else if(map[x][y]=='-'){}
                else if(map[x][y]=='/'){}
                else if(map[x][y]=='\\'){}
                else if(map[x][y]=='.'){}
                else if(map[x][y]=='<'){}
                else if(map[x][y]=='>'){}
                else if(map[x][y]=='^'){}
                else if(map[x][y]=='v'){}
                else if(map[x][y]=='E'){}
                else if(map[x][y]=='S'){continue;}
            }
        }
    }
    if(flag)cout<<ans;
    else cout<<-1;
    return 0;
}