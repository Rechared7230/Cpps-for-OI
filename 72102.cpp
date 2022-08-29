#include<iostream>
#include<vector>

using namespace std;

const unsigned long long mod=1e9+7;
int n,k;
vector<int> g[100009];
unsigned long long f[100009][4];
int c[100009];
bool zero=false;
void dfs(int x,int fa){
	if(x!=fa && c[x]!=0 && c[x]==c[fa])zero=true;
	if(c[x]==1)f[x][1]=1;
	else if(c[x]==2)f[x][2]=1;
	else if(c[x]==3)f[x][3]=1;
	else {
		f[x][1]=f[x][2]=f[x][3]=1;
	}
	for(int i=0;i<g[x].size();i++){
		if(g[x][i]==fa)continue;
		dfs(g[x][i],x);
		if(c[x]==1){
			f[x][1]*=f[g[x][i]][2]+f[g[x][i]][3];
			f[x][1]%=mod;
		}
		else if(c[x]==2){
			f[x][2]*=f[g[x][i]][1]+f[g[x][i]][3];
			f[x][2]%=mod;
		}
		else if(c[x]==3){
			f[x][3]*=f[g[x][i]][1]+f[g[x][i]][2];
			f[x][3]%=mod;
		}
		else {
			f[x][1]*=f[g[x][i]][2]+f[g[x][i]][3];
			f[x][1]%=mod;
			f[x][2]*=f[g[x][i]][1]+f[g[x][i]][3];
			f[x][2]%=mod;
			f[x][3]*=f[g[x][i]][1]+f[g[x][i]][2];
			f[x][3]%=mod;
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	for(int i=0;i<k;i++){
		int a;
		cin>>a;
		cin>>c[a];
	}
	dfs(1,1);
//	cout<<f[1][0]+f[1][1]+f[1][2];
	if(zero){cout<<0;return 0;}
	if(c[1])cout<<f[1][c[1]]%mod;
	else cout<<(f[1][3]+f[1][1]+f[1][2])%mod;
	return 0;
}

