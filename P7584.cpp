#include<iostream>
#include<algorithm>

using namespace std;

int b[300009];
int n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=0;i<n;i++)cin>>b[i];
	sort(b,b+n);
	int mx;
	for(int i=0;i<n;i++){
		mx=max(mx,b[i]+n-i);
	}
	for(int i=0;i<n;i++){
		if(b[i]+n>=mx){
			cout<<n-i;
			return 0;
		}
	}
	
	return 0;
}

