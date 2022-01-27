#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<queue>
#include<stack>

using namespace std;
struct hp{
	int num[1000000];
	bool operator > (const hp &) const;
};
bool hp::operator > (const hp &b) const{
		if(num[0]!=b.num[0])return num[0]>b.num[0];
		for(int i=1;i<num[0];i++){
			if(num[i]!=b.num[i])return num[i]>b.num[i];
		}
		return false;
	}
//void dfs(int dep){
//	if(dep==nnn)return;
//	for(int i=0;i<n;i++){
//		if(){
//			vis[dep]=1;
//			dfs(dep++);
//			vis[dep]=0;
//		}	
//	}
//}
int main(){
	//ios::sync_with_stdio(false);
//	freopen("input.in","r",stdin);
//	freopen("output.out","w",stdout);
	hp a,b;
	cin>>a.num[0]>>b.num[0];
	for(int i=1;i<=a.num[0];i++)cin>>a.num[i];
	for(int i=1;i<=b.num[0];i++)cin>>b.num[i];
	if(a>b)cout<<endl<<1;
	else cout<<endl<<0;

	return 0;
}
