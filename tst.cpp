#include<iostream>

using namespace std;
long long n,a,b,c;
long long p,q;
long long res;
const long long P=998244353;
// inline int gcd(int a,int b) {
//     return b>0 ? gcd(b,a%b):a;
// }
long long cac;
void solve(){
    cin>>n>>a>>b>>c;
    p=(n-a)*(a-c);
    q=(n-1-b)*n;
    cac=P+p;
    // while(!(cac%q)){
    //     cac+=(p+P);
    // }
    res=cac/q;
    cout<<res<<endl;
    cout<<p<<" "<<q;
}
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}