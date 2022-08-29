#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

unsigned long long n,m;
unsigned long long ans;
vector<int>p;
bool pr[100009];

unsigned long long f(int x){
	return x*(x-1);
}

bool isPrime(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)return false;
	}
	return true;
}

void as(){
	unsigned long long rd=max(n,m);
	for(int i=2;i<=rd;i++){
		if(pr[i])continue;
		p.push_back(i);
		if(isPrime(i)){
			for(int j=i*2;j<=rd;j+=i){
				pr[j]=true;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	ans+=n*m;
	p.push_back(1);
	as(); 
	unsigned long long e=min(n,m);
	ans+=f(e);
	
//	for(int i=0;i<p.size();i++)cout<<p[i]<<" "; 
//	cout<<endl;
	for(int i=0;i<p.size();i++){
		for(int j=i+1;j<p.size();j++){
			ans+=f(n/p[j])+f(m/p[j]);
//			cout<<ans<<endl; 
		}
	}
	cout<<ans;
	return 0;
}

