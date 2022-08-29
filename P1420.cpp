#include<iostream>

using namespace std;

int a[10009];
int n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	int cur=0;
	int ans=1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0)continue;
		if(a[i]==a[i-1]+1)ans++;
		else {
			cur=max(ans,cur);
			ans=1;
		}
	}
	cout<<cur;
	
	return 0;
}

