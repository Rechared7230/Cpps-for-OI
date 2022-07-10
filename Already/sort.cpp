#include<iostream>
#include<cmath>

using namespace std;
int m,n;
int a[4][200009];
unsigned long long f(int i,int j){
    unsigned long long mi=0xffff,ma=0;
    for(int k=1;k<=m;k++){
        mi=min((unsigned long long)(a[k][i]+a[k][j]),mi);
        ma=max((unsigned long long)(a[k][i]+a[k][j]),ma);
    }
    return mi+ma;
}
int main(){
	ios::sync_with_stdio(false);
    freopen("sort.in","r",stdin);
    freopen("sort.out","w",stdout);
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){cin>>a[i][j];}
    }
    unsigned long long ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ans+=f(i,j);
        }
        //cout<<endl;
    }
    cout<<ans;
    return 0;
}
