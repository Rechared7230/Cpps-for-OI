#include<iostream>
#include<algorithm>

using namespace std;

int a[1000009];
int n;

bool cmp(int a,int b){
	if(a%2==0 && b%2==0)return a>b;
	if(a%2==0 && b%2!=0)return true;
	if(a%2!=0 && b%2==0)return false;
	if(a%2!=0 && b%2!=0)return a>b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	if(n==1&& a[0]%2==1){
		cout<<"NIESTETY";
		return 0;
	}
	sort(a,a+n,cmp);
//	for(int i=0;i<n;i++)cout<<a[i];
	unsigned long long ans=0;
	for(int i=0;i<n-1;i++)ans+=a[i];
	if(ans%2==0){
		if(a[n-1]%2==0)ans+=a[n-1];
	}
	else {
		if(a[n-1]%2==1)ans+=a[n-1];
	}
	cout<<ans;
	return 0;
}

