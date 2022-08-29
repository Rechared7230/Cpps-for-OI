#include<iostream>
#include<algorithm>

using namespace std;

int n;
struct jx{
	int u,d,l,r;
}a[25009];
bool ex[25009];

bool cmp(jx x,jx y){
	return x.l==y.l? x.d<y.d:x.l<y.l;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].l>>a[i].d>>a[i].r>>a[i].u;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].r<a[j].l)break;
			if(a[j].d>a[i].u)continue;
			if((a[i].u==a[j].d||a[i].d==a[j].u)&&a[i].l<=a[j].l&&a[i].r>=a[j].l || a[i].r==a[j].l && a[i].u>=a[j].d&&a[i].d<=a[j].u)ex[i]=ex[j]=true;
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(!ex[i])ans++;
	}
	cout<<ans;
	return 0;
}

