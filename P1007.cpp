#include<iostream>

using namespace std;
int l,n;
int maxn=0,minn=0x3f3f3f3f;
int main(){
	cin>>l>>n;
	for(int i=0;i<n;i++){
		int a=0;
		cin>>a;
		maxn=max(maxn,max(a,l-a)+1);
		minn=min(minn,min(a,l-a)+1);
	}
	cout<<minn<<" "<<maxn;
	return 0;
}
