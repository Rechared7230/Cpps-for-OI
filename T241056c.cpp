#include<iostream>

using namespace std;

int a[1000000];
unsigned long long cf(unsigned long long n){
    unsigned long long ite=0;
    while(n>0){
        a[ite]=n%10;
        ite++;
        n/=10;
    }
    return ite;
}
unsigned long long reverse(unsigned long long n){
    unsigned long long an=cf(n);
    unsigned long long ans=0;
    for(int i=0;i<an;i++){
        ans*=10;
        ans+=a[i];
    }
    return ans;
}
int main(){
    unsigned long long n;
    int t;
    cin>>t;
    for(int nn=0;nn<t;nn++){
        cin>>n;
        unsigned long long ans=1;
        while(reverse(ans)<=n)ans++;
        cout<<ans-1<<endl;
    }
    
    return 0;
}