#include<iostream>
#include<queue>

using namespace std;

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int r,c;
struct maaap{
    int w,r;
    char c;
    bool vis=false,v=false;
}m[51][51];
struct pt{
    int x,y;
}st,ed,wt;
int main(){
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>m[i][j].c;
            m[i][j].v=true;
            if(m[i][j].c=='*'){
                wt.x=i,wt.y=j;
            }
            if(m[i][j].c=='D'){
                ed.x=i,ed.y=j;
            }
            if(m[i][j].c=='S'){
                st.x=i,st.y=j;
            }
            if(m[i][j].c=='X'){
                m[i][j].v=false;
            }
        }
    }
    
    queue<pt>q;
    q.push(wt);
    m[wt.x][wt.y].vis=true;
    while(!q.empty()){
        pt c=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=c.x+dx[i];
            int ny=c.y+dy[i];
            if(m[nx][ny].v && !m[nx][ny].vis){
                m[nx][ny].vis=true;
                pt np;np.x=nx,np.y=ny;
                q.push(np);
                m[nx][ny].w=m[c.x][c.y].w+1;
            }
        }
    }
    queue<pt>p;
    p.push(st);
    m[st.x][st.y].vis=false;
    while(!p.empty()){
        pt c=p.front();
        p.pop();
        for(int i=0;i<4;i++){
            int nx=c.x+dx[i];
            int ny=c.y+dy[i];
            if(m[nx][ny].v && m[nx][ny].vis){
                m[nx][ny].vis=false;
                m[nx][ny].r=m[c.x][c.y].r+1;
                if(m[nx][ny].r > m[nx][ny].w && !(nx==ed.x && ny==ed.y)){
                    m[nx][ny].r=0;
                    continue;
                }
                pt np;np.x=nx,np.y=ny;
                p.push(np);
            }
        }
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++)cout<<m[i][j].w;
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++)cout<<m[i][j].r;
        cout<<endl;
    }
    if(m[ed.x][ed.y].r==0 )cout<<"KAKTUS";
    else {
        cout<<m[ed.x][ed.y].r;
    }
    return 0;
}