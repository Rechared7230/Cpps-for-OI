#include<iostream>

using namespace std;

int n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	cout<<n<<endl;
	bool c=false;
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++)cout<<c;
		int d;
		if(c)d=0;
		else d=1;
		
		for(int j=0;j<n-i;j++)cout<<d;
		cout<<endl;
		c^=1;
	}
	
	return 0;
}

