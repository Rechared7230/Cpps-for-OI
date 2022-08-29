#include<iostream>

using namespace std;

int n,t;
unsigned long long s[100009],p[100009];
int ans=0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>s[i]>>p[i];
	}
	
	int i=n;
	while(i>0){
		unsigned long long cp=s[i]*t+p[i];
		int num=1;
		while(cp<=s[i-num]*t+p[i-num])num++;
		ans++;
		i-=num;
	}
	cout<<ans;
	
	return 0;
}

