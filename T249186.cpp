#include<iostream>

using namespace std;

unsigned long long t,l,r,x;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen("gcd02.in","r",stdin);
	cin>>t;
	while(t--){
		cin>>l>>r>>x;
		unsigned long long a=l/x,b=r/x;
		if(a==b){
			cout<<a<<endl;
		}
		else{
			cout<<1<<endl;
		}
	}
	
	return 0;
}

