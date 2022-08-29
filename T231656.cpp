#include<iostream>
#include<cmath> 
#include<algorithm>
using namespace std;

unsigned long long n,w,mx;
unsigned long long a[1000009];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("exchange01.in","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
//		cout<<i; 
	}
	cin>>w;
	for(int i=0;i<n;i++){
		if(a[i]<=w){
//			mi=min(mi,a[i]);
			mx=max(mx,a[i]);
		}
	}
//	cout<<mx/mi;
	sort(a,a+n);
//	for(int i=0;i<n;i++)cout<<a[i]<<" ";
//	cout<<endl;
	int ans=0;
	unsigned long long c=0;
	int i=0;
	while(c<mx){
		c+=a[i];
		i++;
		ans++;
	}
//	cout<<ans;
	if(c>mx)ans--;
	cout<<ans;
	return 0;
}

