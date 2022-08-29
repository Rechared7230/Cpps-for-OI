#include<iostream>
#include<algorithm>
using namespace std;
const unsigned long long mod=1e9+7;
int n,m,k;
struct tj{int x,y;int v=1;}a[100009];
bool cmp(tj a,tj b){
	return a.x==a.x?a.y<a.y:a.x<b.x;
}

unsigned long long qp(int a,int b){
	unsigned long long r=1;
	if(b%2)r=(r*a)%mod,b--;
	while(b){
		a=a*a%mod;
		b>>1;
		r=r*a%mod;
	}
	return a;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m>>k;
	for(int i=0;i<k;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a,a+k,cmp);
	for(int i=1;i<k;i++){
		if(a[i].x==a[i-1].x && a[i].y==a[i-1].y){
			a[i].v=0;
		}
	}
//	for(int i=0;i<k;i++)cout<<endl<<a[i].x<<" "<<a[i].y;
	unsigned long long ans=1,c=0;	
	int cur=0;
	int num=0;
	for(int i=1;i<=m;i++){
		c=n*(n+1)/2;
		bool cc=true;
		while(a[cur].x==i&&cur<k){
			c-=a[cur].y*a[cur].v;
			cur++;
			cc=false;
		}
		if(!cc)ans=ans*c%mod;
		if(cc)num++;
//		cout<<c<<endl;
//		cout<<ans<<endl;
//		ans%=mod;
	}
	ans=ans*qp(n*(n+1)/2,num);
	cout<<ans;
	return 0;
}

