#include<iostream>
#include<set>
#include<cmath>
#include<vector>
using namespace std;

int f[1009],tot;
int t;
int n;
set<int>s[1009];
vector<int>v[1009];
unsigned long long cval=0;
set<int>c;
void dfs(int x){
	if(x==n){
		c.insert(cval);
		return;
	}
	for(int i=0;i<v[x].size();i++){
		cval+=v[x][i];
		dfs(x+1);
		cval-=v[x][i];
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>t;
	while(t--){
		tot=0;
		cin>>n;
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			for(int j=0;j<k;j++){
				int num;
				cin>>num;
				int cur=s[i].size();
				s[i].insert((int)log(num));
				if(s[i].size()>cur){
					v[i].push_back((int)log(num));
//					cout<<(int)log(num)<<endl;
				}
			}
//			cout<<v[i].size()<<endl;
			if(s[i].size()!=1)f[tot++]=i;
//			cout<<tot<<endl;
		}
		if(tot=0){
			cout<<1;
			continue;
		}
		dfs(0);
		cout<<c.size()<<endl;
		c.clear();
		for(int i=0;i<n;i++)s[i].clear();
	}
		
	
	return 0;
}

