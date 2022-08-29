#include<iostream>
#include<cstring>

using namespace std;

string s;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>s;
	int num=0;
	int ans=0;
	for(int i=0;i<s.length();i++){
		if(num==0 && s[i]=='H'){
			num++;
			continue;
		}
		else if(num==1 && s[i]=='O'){
			num++;
			continue;
		}
		else if(num==2 && s[i]=='N'){
			num++;
			continue;
		}
		else if(num==3 && s[i]=='I'){
			ans++;
			num=0;
			continue;
		}
	}
	cout<<ans;
	
	return 0;
}

