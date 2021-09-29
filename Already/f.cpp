#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
long long ans=0;
const int MAXN=20051130;
int a[20051131];
long long qpow(long long a1,long long b)
{
	long long x=a1;
	long long ans1=1;
	while(b)
	{
		if(b%2!=0)
			ans1*=x;
		ans1%=MAXN;
		x*=x;
		x%=MAXN;
		b/=2;
	}
	return ans1;
}
int main(){
    int n=0,q=0,k=0;
    cin>>n>>q>>k;
    int v;
    for(int i=0;i<q;i++){
        cin>>a[i]>>v;
        a[i+1]=n+1;
        sort(a,a+i+1);
        int cac;
        for(int j=0;j<i+1;j++){
            cac=a[j+1]-a[j];
            ans+=qpow(cac,k);
        }
        if(i==q-1)cout<<ans%MAXN;
        else cout<<ans%MAXN<<"\n";
        ans=0;
    }
    return 0;
}