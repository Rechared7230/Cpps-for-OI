#include<iostream>
#include<set>
#include<cmath>

using namespace std;

unsigned long long n;
//set<unsigned long long>s;
unsigned long long ans=1;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	unsigned long long k=sqrt(n);
	for(unsigned long long i=2;i<=k;i++){
		if(n%i==0){
			int a=0;
			while(n%i==0){
				a++;
				n/=i;
			}
			ans*=a*2+1;
		}
	}
//	cout<<s.size();
	if(n>1)ans*=3;
	cout<<(ans+1)/2;
	
	return 0;
}

