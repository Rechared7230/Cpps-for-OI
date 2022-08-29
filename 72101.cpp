#include<iostream>
#include<vector>

using namespace std;

vector<int>g[6009];
int n;int root;
int f[6009][2];
int a[6009];
bool v[6009];

namespace Hieda_no_Akyuu{
	void Is_My_Wife(int x){
		f[x][1]=a[x];
		f[x][0]=0;
		for(int i=0;i<g[x].size();i++){
			Is_My_Wife(g[x][i]);
			f[x][1]+=f[g[x][i]][0];
			f[x][0]+=max(f[g[x][i]][1],f[g[x][i]][0]);
		}
	}
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		v[a]=true;
		g[b].push_back(a);
	}
	for(int i=1;i<=n;i++){
		if(!v[i]){root=i;break;}
	}
//	cout<<root;
	Hieda_no_Akyuu::Is_My_Wife(root);
	cout<<max(f[root][0],f[root][1]);
	return 0;
}

