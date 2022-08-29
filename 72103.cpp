#include<iostream>
#include<vector>

using namespace std;

int n;int minn=0x3f3f3f3f;
vector<int>g[50009];
int f[50009];
int mx[50009];

void dfs(int x,int fa){
	f[x]=0;
	mx[x]=0;
	for(int i=0;i<g[x].size();i++){
		if(g[x][i]==fa)continue;
		dfs(g[x][i],x);
		f[x]+=f[g[x][i]]+1;
		mx[x]=max(mx[x],f[g[x][i]]+1);
	}
	mx[x]=max(n-f[x]-1,mx[x]);
	minn=min(minn,mx[x]);
}

namespace I_AK{
	void IOI(int x,int fa){
		f[x]=0;
		mx[x]=0;
		for(int i=0;i<g[x].size();i++){
			if(g[x][i]==fa)continue;
			dfs(g[x][i],x);
			f[x]+=f[g[x][i]]+1;
			mx[x]=max(mx[x],f[g[x][i]]+1);
		}
		mx[x]=max(n-f[x]-1,mx[x]);
		minn=min(minn,mx[x]);
	}
	
	void NOIP(){
		cin>>n;
	}
	void NOI(){
		for(int i=0;i<n-1;i++){
			int a,b;
			cin>>a>>b;
			g[a].push_back(b);
			g[b].push_back(a);
		}
	}
	void ICPC(){
		for(int i=1;i<=n;i++)
			if(minn==mx[i])cout<<i<<" ";
	}
}

int main(){
	I_AK::NOIP();
	I_AK::NOI();
	I_AK::IOI(1,1);
	I_AK::ICPC();
	return 0;
}

