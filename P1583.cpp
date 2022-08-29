#include<iostream>
#include<algorithm>

using namespace std;

int n,e[11];
int k;
struct prp{
	int v,b,a;
}a[20009];

bool cmp(prp a,prp b){
	return a.v>b.v;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	cin>>k;
	for(int i=1;i<=n;i++)a[i].a=i;
	for(int i=1;i<=10;i++)cin>>e[i];
//	cin>>e[0];
	for(int i=1;i<=n;i++)cin>>a[i].v;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)a[i].b=i;
	for(int i=1;i<=n;i++){
		a[i].v+=e[(a[i].b-1)%10+1];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=k;i++)
		cout<<a[i].a<<" ";
	return 0;
}

