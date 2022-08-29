#include<iostream>
#include<cstring> 

using namespace std;

string s1,s2;
int f[2][5009];
int num[2][5009];
unsigned long long ans=0;
const unsigned long long p=100000000;
int maxl=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>s1>>s2;

	num[1][0]=1;
	bool c=0;
	for(int i=0;i<s2.length()-1;i++)num[1][i]=1;
	for(int i=1;i<s1.length()-1;i++,c^=1){
		for(int j=1;j<s2.length()-1;j++){
//			if(i==0||j==0){f[i][j]=0;continue;}
			if(s1[i]==s2[j]){
				f[c^1][j]=f[c][j-1]+1;
				num[c^1][j]+=num[c][j];
			}
			else f[c^1][j]=max(f[c][j],f[c^1][j-1]);
			if(f[c^1][j]==f[c^1][j-1]){
				num[c^1][j]+=num[c^1][j-1];
			}
			if(f[c^1][j]==f[c][j])num[c^1][j]+=num[c][j];
			if(s1[i-1]!=s2[j-1] && f[c^1][j]==f[c][j-1])num[c^1][j]-=num[c][j-1];
			num[c^1][j]%=p;
		}
	}
	cout<<f[c][s2.length()-2]<<endl<<(num[c][s2.length()-2]+p)%p;
//	cout<<f[s1.length()-2][s2.length()-2]<<endl<<ans;
	return 0;
}

