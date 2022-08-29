#include<iostream>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

int n,m;
vector<int>g[100009];
int v[1000009];
bool vis[1000009];

int dfs(int x){
	if(v[x]!=x)return v[x];
	else {
		for(int i=0;i<g[x].size();i++){
			vis[g[x][i]]=true;
			v[x]=max(v[x],dfs(g[x][i]));
		}
		return v[x];
	}
}

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
	}
	for(int i=1;i<=n;i++)v[i]=i;
	for(int i=1;i<=n;i++){
		memset(vis,false,sizeof(vis));
		v[i]=max(v[i],dfs(i));
	}
	for(int i=1;i<=n;i++)cout<<v[i]<<" ";
	return 0;
}
