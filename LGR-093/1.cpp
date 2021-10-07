#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=abs(a-c),y=abs(b-d);
    bool ck=(x+y)%2;
    int ans;
    if(ck){
        ans=(max(x,y))*2-1;
    }
    else if(!ck) ans=(max(x,y))*2;  
    // if(a==c){
    //     if(ck){
    //     ans=(max(x,y))*2-1;
    //     }
    //     else if(!ck) ans=(max(x,y))*2-2;  
    // }
    // if(x==0&&y==0){cout<<0<<endl;return;}
    cout<<ans<<"\n";
    return ;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)solve();
    return 0;
}