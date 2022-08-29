#include<iostream>

using namespace std;

int l,m;
bool a[10009];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>l>>m;
	for(int i=0;i<m;i++){
		int s,e;
		cin>>s>>e;
		for(int j=s;j<=e;j++){
			a[j]=true;		
		}
	}
	int ans=0;
	for(int i=0;i<=l;i++)
		if(!a[i])ans++;
	cout<<ans;
	return 0;
}

