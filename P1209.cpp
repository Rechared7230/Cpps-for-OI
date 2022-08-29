#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int m,s,c;
int a[209];
priority_queue<int>q;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>m>>s>>c;
	for(int i=0;i<c;i++){
		cin>>a[i];
	}
	sort(a,a+c);
	for(int i=1;i<c;i++)q.push(a[i]-a[i-1]-1);
	for(int i=1;i<m;i++){
		if(!q.empty())q.pop();
	}
	int ans=c;
	while(!q.empty()){
		ans+=q.top();
		q.pop();
	}
	cout<<ans;
	return 0;
}

