#include<iostream>

using namespace std;
struct carpet{
    int a,b,g,k;
}c[10009];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>c[i].a>>c[i].b>>c[i].g>>c[i].k;
    int x,y;
    cin>>x>>y;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(x>=c[i].a && y>=c[i].b && x<c[i].g+c[i].a && y<c[i].b+c[i].k)ans=i;
    }
    if(ans==0)cout<<-1;
    else cout<<ans;
    return 0;
}