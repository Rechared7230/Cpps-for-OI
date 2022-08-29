#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#include<queue>

using namespace std;

vector <int> g[100009];
bool vis[100009];
int n,m;
struct iin{
	int a1,b1;
}nn[1000009];

void dfs(int x){
	cout<<x<<" ";
	for(int i=0;i<g[x].size();i++){
		if(!vis[g[x][i]]){vis[g[x][i]]=true;dfs(g[x][i]);}
	}
	return ;
}
queue<int>q;
void bfs(int x){
	while(!q.empty()){
		int a=q.front();
		q.pop();
		cout<<a<<" ";
		for(int i=0;i<g[a].size();i++){
			if(!vis[g[a][i]]){
				vis[g[a][i]]=true;
				q.push(g[a][i]);
			}
		}
	}
}

bool cmp(iin x,iin y){
	if(x.b1==y.b1)return x.a1<y.a1;
	else return x.b1<y.b1;
}

int main(){
	memset(vis,false,sizeof(vis));
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>nn[i].a1>>nn[i].b1;
	}
	sort(nn,nn+m,cmp);
	for(int i=0;i<m;i++){
		g[nn[i].a1].push_back(nn[i].b1);
	}

	for(int i=1;i<=n;i++){
		if(!vis[i])dfs(i);
	}
	cout<<endl;
	q.push(1);
	memset(vis,false,sizeof(vis));
//	bfs(1);
	for(int i=1;i<=n;i++){
		if(!vis[i])bfs(i);
	}
	return 0;
} 
