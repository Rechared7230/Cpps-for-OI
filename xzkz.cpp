#include<iostream>
using namespace std;
int s[51];
struct kz{
    int xh;
    int sd;
    int xf;
    int c;
}z[200000];
// int main(){
//     int n,p;
//     cin>>n>>p;
//     int ans;
//     for(int i=1;i<=n;i++)cin>>z[i].xh>>z[i].sd>>z[i].xf;
//     for(int i=1;i<n;i++){
//         for(int j=2;j<=n;j++){
//             if(z[i].sd!=z[j].sd)continue;
//             bool ck=false;
//             for(int st=i,ed=j;st<ed;st++){
//                 if(z[st].xf<=p)ck=true;
//             }
//             if(ck)ans++;
//         }
//     }
//     cout<<ans;
//     return 0;
// }
//O(n^3)

int main(){
    int n,p;
    cin>>n>>p;
    int ans;
    z[0].c=0;
    for(int i=1;i<=n;i++)cin>>z[i].xh>>z[i].sd>>z[i].xf;
    for(int i=1;i<=n;i++){
        if(z[i].xf<=p)z[i].c=z[i-1].c+1;
        else z[i].c=z[i-1].c;
    }
    for(int i=1;i<n;i++){
        for(int j=2;j<=n;j++){
            if(z[i].sd!=z[j].sd)continue;          
            if(z[j].c-z[i].c>0)ans++;
        }
    }
    cout<<ans;
    return 0;
}//O(n^2)
//Msybe you can use next[i] to mark these houses that have the same color,and change j++ into j=next[j];