#include<iostream>

using namespace std;

int n,a[10009];
bool c=true;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n-1;i++){
		if(a[i+1]-a[i]>0 && c==false){
			ans++;
			c=true;
		}
		if(a[i+1]-a[i]<0 && c==true)c=false;
	}
	cout<<ans;
	return 0;
}

