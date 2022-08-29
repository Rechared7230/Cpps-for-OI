#include<iostream>
#include<cstring>

using namespace std;

string s;
int a[26];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>s;
	for(int i=0;i<s.length();i++){
		a[s[i]-'a']++;	
	}
	int mx=0,mi=0x3f3f3f3f;
	for(int i=0;i<26;i++){
		if(a[i]){
			mx=max(mx,a[i]);
			mi=min(mi,a[i]);
		}
	}
	int an=mx-mi;
	if(an==0||an==1){
		cout<<"No Answer"<<endl<<0;
		return 0;
	}
	for(int i=2;i*i<=mx-mi;i++){
		if(an%i==0){
			cout<<"No Answer"<<endl<<0;
			return 0;
		}
	}
	cout<<"Lucky Word"<<endl<<an;
	return 0;
}

