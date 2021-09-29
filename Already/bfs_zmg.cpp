#include<iostream>
#include<queue>
using namespace std;

int a[100][100],v[100][100];//a[i][j]:0 can  1 cannot  v[i][j]: 0 not  1 visit
struct point{
    int x,y,step;
};
queue <point> r;
int bx[4]={0,1,0,-1};//right down left up
int by[4]={1,0,-1,0};//right down left up

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int stx,sty,x,y;
    cin>>stx>>sty>>x>>y;
    point stp;
    stp.x=stx;
    stp.y=sty;
    r.push(stp);
    bool flag=false;
    v[stx][sty]=1;
    while(!r.empty()){
        if(r.front().x==x && r.front().y==y){
            flag=true;
            cout<<r.front().step;
            break;
        }
        for(int i=0;i<4;i++){
            int ax,ay;
            ax=r.front().x+bx[i];
            ay=r.front().y+by[i];
            if(!a[ax][ay] && !v[ax][ay]){
                point temp;
                temp.x=ax;
                temp.y=ay;
                temp.step=r.front().step+1;
                r.push(temp);
                v[ax][ay]=1;
            }
        }
        r.pop();
    }
    if(!flag)cout<<"No Answer!!!Fuck & Shit";
    return 0;
}

