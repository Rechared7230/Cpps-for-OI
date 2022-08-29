#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<queue>
using namespace std;
int n,m,s;
int u[500007],v[500007];
unsigned long long w[500007];
unsigned long long d[10006];
int pre[500007];
bool iq[10006];
priority_queue<int>q;
int main(){
	ios::sync_with_stdio(false);
	memset(d,0x3f,sizeof(d));
	memset(iq,0,sizeof(iq));
	cin>>n>>m>>s;
	for(int i=0;i<m;i++)cin>>u[i]>>v[i]>>w[i];
	q.push(s);
	iq[s]=1;
	d[s]=0;
	while(!q.empty()){
		int pt=q.top();q.pop();
		iq[pt]=0;
		for(int i=0;i<m;i++){
			if(u[i]==pt){
				if(!iq[v[i]]){
					q.push(v[i]);
					iq[v[i]]=1;
				}
				if(d[v[i]]>d[pt]+w[i]){
					d[v[i]]=d[pt]+w[i];
					pre[v[i]]=pt;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
