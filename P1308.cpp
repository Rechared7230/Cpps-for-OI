#include<iostream>
#include<set>
#include<cstring>
#include<cmath>

using namespace std;

string s,t;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>s;
	cout<<'t'+32<<" Y";
	int ans=0;
	int po=-1;
	int cur=0;
	while(cin>>t){
		if(s.length()!=t.length()){
			cur++;
			continue;
		}
		else{
			bool xt=true;
			for(int i=0;i<s.length();i++){
				if(abs(s[i]-t[i])!=32 && abs(s[i]-t[i])!=0){
					xt=false;
					break;
				}
			}
			if(xt){
				ans++;
				if(po<0)po=cur;
			}
		}
		cur++;
	}
	if(ans){
		cout<<ans<<" "<<po;
	}
	else cout<<-1;
	return 0;
}

