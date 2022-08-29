#include<iostream>

using namespace std;

int k; 


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>k;
	double s;
	int ans=0;
	while(s<=k){
		ans++;
		s+=(double)1.0/(double)ans;
	}
	cout<<ans;
	return 0;
}

