#include<iostream>
#include<algorithm>

using namespace std;

int cnm,t;
int n,k;
unsigned long long a[10009]; 

bool cmp(unsigned long long a,unsigned long long b){
	return a>b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>cnm>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++)cin>>a[i];
		if(k==2){
			cout<<a[0]+a[1]<<endl;
			continue;
		}
		sort(a+2,a+n,cmp);
		unsigned long long ans=0;
		for(int i=0;i<k;i++)ans+=a[i];
		cout<<ans<<endl;
	}
	
	return 0;
}

