#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[1000000];
int main(){
    //freopen("1.txt","w",stdout);
    int n,l,r;
    cin>>n>>l>>r;
    for(int i=2;i<n;i++){
        cin>>a[i];//a[a[i]]=i;
    }
    int ans;
    for(int i=1;i<=n;i++){
        
        if(i==1){
            for(int j=2;j<=n;j++)if(a[j]==1)ans++;
        }
        else{
            if(a[i-1]<=2)ans++;
            for(int j=2;j<=n;j++)if(a[j]==i)ans++;
        }
        cout<<ans<<"\n";
        ans=0;
    }
    return 0;
}