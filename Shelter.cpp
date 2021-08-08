#include<iostream>
using namespace std;

void slove();
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        slove();
    }
    return 0;
}
void slove(){
    int n,p,q;
    cin>>n>>p>>q;
    int line;
    //bool isji=false;
    //if(n&1)isji=true;
    if(p==0&&q==0){cout<<0<<"\n";return ;}
    if(n==1){
        cout<<p<<"\n";
        return ;
    }
    for(int i=2;i<=n;i++){
        int ca;
        if((n-i)&1){
            ca=2*i+1;
            if(ca*p<q){line =i-1;break;}
        }
        else{
            ca=2*i-1;
            if(ca*p<q){line=i-2;break;}
        }
    }
    int ans;
    ans=line*(line+1)*p/2+(n-line)*q/2;
    cout<<ans<<"\n";
    return ;
}