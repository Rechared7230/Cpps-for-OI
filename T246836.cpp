#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int t;
unsigned long long n;
bool p[1000009];
int ys[1000009];
vector<int>v;
int tot;
void fun(unsigned long long m){
	for(int i=0;v[i]<m && i<v.size();i++){
		if(m%v[i]==0)tot++;
		while(m%v[i]==0){
			m/=v[i];
			ys[tot]++;
		}
	}
} 
void as(){
	for(int i=2;i<=1000000;i++){
		if(!p[i]){
			v.push_back(i);
			for(int j=i+i;j<=1000000;j+=i)p[j]=true;
		}
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	as();
	cin>>t;
	while(t--){
		cin>>n;
		int ans=0;
		memset(ys,0,sizeof(ys));
		fun(n);
		for(int i=1;i<=tot;i++){
			if(ys[i]>=3){
				ans+=ys[i]/3;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}

