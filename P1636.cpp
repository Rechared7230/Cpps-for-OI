#include<iostream>

using namespace std;

int a[1009];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x]++;
		a[y]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(a[i]&1){
			ans++;
		}
	}
	if(ans==0)cout<<1;
	else cout<<(ans>>1);
	return 0;
}

