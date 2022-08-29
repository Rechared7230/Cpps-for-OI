#include<iostream>
#include<cstring>
#include<vector>
#include<queue>

using namespace std;

//vector<int>g1[1009],g2[1009];
const int N=1009,M=100009;
int head1[N],head2[N],ver1[M],ver2[M],edge1[M],edge2[M],next1[M],next2[M],d1[N],d2[N];
bool v1[N],v2[N];
int n,m,tot1,tot2;
priority_queue<pair<int,int> >q;

void add1(int x,int y,int z){
	ver1[++tot1]=y,edge1[tot1]=z,next1[tot1]=head1[x],head1[x]=tot1;
}
void add2(int x,int y,int z){
	ver2[++tot2]=y,edge2[tot2]=z,next2[tot2]=head2[x],head2[x]=tot2;
}
void dijk1(int x){
	memset(d1,0x3f,sizeof(d1));
	memset(v1,0,sizeof(v1));
	d1[x]=0;
	q.push(make_pair(0,x));
	while(q.size()){
		int x=q.top().second;
		q.pop();
		if(v1[x])continue;
		v1[x]=1;
		for(int i=head1[x];i;i=next1[i]){
			int y=ver1[i],z=edge1[i];
			if(d1[y]>d1[x]+z){
				d1[y]=d1[x]+z;
				q.push(make_pair(-d1[y],y));
			}
		}
	}
}

void dijk2(int x){
	memset(d2,0x3f,sizeof(d2));
	memset(v2,0,sizeof(v2));
	d2[x]=0;
	q.push(make_pair(0,x));
	while(q.size()){
		int x=q.top().second;
		q.pop();
		if(v2[x])continue;
		v2[x]=1;
		for(int i=head2[x];i;i=next2[i]){
			int y=ver2[i],z=edge2[i];
			if(d2[y]>d2[x]+z){
				d2[y]=d2[x]+z;
				q.push(make_pair(-d2[y],y));
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int x;
	cin>>n>>m>>x;
	
	for(int i=1;i<=m;i++){
		int a,y,z;
		cin>>a>>y>>z;
		add1(a,y,z);
		add2(y,a,z);
	}
	dijk1(x);
	dijk2(x);
	//for d[i];
	unsigned long long ans=0;
	for(int i=1;i<=n;i++){
		ans=max(ans,(unsigned long long)(d1[i]+d2[i]));
	}
	cout<<ans;
	return 0;
}

