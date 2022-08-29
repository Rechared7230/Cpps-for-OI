#include<iostream>

using namespace std;

const int N=4000005;
struct Tree{
	int Left,Right,val,valmin;
}a[N*4];
void build(int id,int l,int r){
	a[id].Left=l;a[id].Right=r;
	if(l==r){
		cin>>a[id].val;a[id].valmin=a[id].val;return ;
		
	}
	int mid=(l+r)>>1;
	build(id<<1,l,mid);
	build((id<<1)+1,mid+1,r);
	a[id].val=max(a[id<<1].val,a[(id<<1)+1].val);
	a[id].valmin=min(a[id<<1].valmin,a[(id<<1)+1].valmin);
}
int findmax(int id,int l,int r){
	if(a[id].Left>=l && a[id].Right<=r){
		return a[id].val;
	}
	int mid=(a[id].Left+a[id].Right)>>1;
	int v=-0x3f3f3f3f;
	if(l<=mid){
		v=max(v,findmax(id<<1,l,r));
	}
	if(r>mid){
		v=max(v,findmax((id<<1)+1,l,r));
	}
	return v;
}
int findmin(int id,int l,int r){
	if(a[id].Left>=l && a[id].Right<=r){
		return a[id].valmin;
	}
	int mid=(a[id].Left+a[id].Right)>>1;
	int v=0x3f3f3f3f;
	if(l<=mid){
		v=min(v,findmin(id<<1,l,r));
	}
	if(r>mid){
		v=min(v,findmin((id<<1)+1,l,r));
	}
	return v;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("range01.in","r",stdin);
	int n;
	cin>>n;
	build(1,1,n);
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			ans=max(ans,findmax(1,i,j)-findmin(1,i,j)-j+i-1);
		}
	}
	cout<<ans;
	return 0;
}

