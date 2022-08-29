#include<iostream>
#include<algorithm>

using namespace std;

int n;
pair<int,int>q[5009];
int f[5009];
#define a first
#define b second
bool cmp(pair<int,int>x,pair<int,int>y){
	return x.a==y.a ? x.b>y.b : x.a>y.a;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q[i].a>>q[i].b;
	}
	sort(q,q+n,cmp);
//	for(int i=0;i<n;i++)cout<<q[i].a<<" "<<q[i].b<<endl;
	int ans=0;
	int mx=1;
//	f[0]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(q[i].b>q[j].b)f[i]=max(f[i],f[j]+1);
		}
		ans=max(ans,f[i]);
	}
	cout<<ans+1;
	return 0;
}

