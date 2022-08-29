#include<iostream>
#include<cmath>

using namespace std;
const int N=100005;
struct Tree{
	int Left,Right,val,lazy;
}a[N*4];
void build(int id,int l,int r){
	a[id].Left=l;a[id].Right=r;
	if(l==r){
		cin>>a[id].val;return ;
	}
	int mid=(l+r)>>1;
	build(id<<1,l,mid);
	build((id<<1)+1,mid+1,r);
	a[id].val=max(a[id<<1].val,a[(id<<1)+1].val);
}
void change(int id,int k,int v){
	if(a[id].Left==a[id].Right){a[id].val=v;return ;}
	int mid=(a[id].Left+a[id].Right)>>1;
	if(mid>=k)change(id<<1,k,v);
	else change((id<<1)+1,k,v);
	a[id].val=max(a[id<<1].val,a[(id<<1)+1].val);
}
int find(int id,int l,int r){
	if(a[id].Left>=l && a[id].Right<=r){
		return a[id].val;
	}
	int mid=(a[id].Left+a[id].Right)>>1;
	int v=-0x3f3f3f3f;
	if(l<=mid){
		v=max(v,find(id<<1,l,r));
	}
	if(r>mid){
		v=max(v,find((id<<1)+1,l,r));
	}
	return v;
}
//void changel(int x,int k,){
//}
int main(){
	int n;
	cin>>n;
	build(1,1,n);
	
	int k,v;
	cin>>k>>v;
	change(1,k,v);
	int l,r;
	cin>>l>>r;
	cout<<find(1,l,r);
	return 0;
}
