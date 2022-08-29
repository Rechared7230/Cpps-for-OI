#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

struct point{
	int x,y,dep;
}s,e;
int n;
int m[1009][1009];
int dep[1009][1009];
bool vis[1009][1009];
int ans=0x3f3f3f3f;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	string ss;
	for(int i=1;i<=n;i++){
		cin>>ss;
		for(int j=0;j<n;j++){
			m[i][j+1]=ss[j]-'0';
		}
    }
	cin>>s.x>>s.y>>e.x>>e.y;
	queue<point>q;
	q.push(s);
	bool find=false;
	while(!q.empty()){
		point c=q.front();
		q.pop();
		if(c.x==e.x && c.y==e.y){
			cout<<c.dep;
			return 0;
		}
		for(int i=0;i<4;i++){
			int cx=c.x+dx[i];
			int cy=c.y+dy[i];
			if(cx<1 || cy<1 || cx>n || cy>n)continue;
			if(!vis[cx][cy]){
				point cp;
				cp.x=cx,cp.y=cy,cp.dep=c.dep+1;
				vis[cx][cy]=true;
				q.push(cp);
			}
		}
//		if(find)break;
	}
	return 0;
}

