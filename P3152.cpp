#include<iostream>
#include<cmath>

using namespace std;

int n;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	cout<<(int)log2(n)+1;
	
	return 0;
}

