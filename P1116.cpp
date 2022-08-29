#include<iostream>
#include<algorithm>

using namespace std;

int a[1009],b[1009];
//bool c[1009]
int n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
	int ans=0;
//	for(int i=0;i<n;i++)cout<<000a[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==b[j] && ){
				ans+=j-i;
			}
		}
	}
	cout<<ans;
	return 0;
}

