#include<iostream>
#include<cmath>

using namespace std;
struct Hakurei_Reimu{
    int val;
    int pl;
}b[1000009],f[1000009];
int a[1000009];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //back
    int numb=1;
    int iii=a[n-1];
    b[0].val=a[n-1];
    b[0].pl=n-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]>iii){
            iii=a[i];
            b[numb].val=a[i];
            b[numb].pl=i;
            numb++;
        }
    }
    //front
    int numf=1;
    iii=a[0];
    f[0].val=a[0];
    f[0].pl=0;
    for(int i=0;i<n;i++){
        if(a[i]>iii){
            iii=a[i];
            f[numf].val=a[i];
            f[numf].pl=i;
            numf++;
        }
    }
    //check
    // for(int i=0;i<numb;i++)cout<<b[i].val<<" ";
    // cout<<endl;
    // for(int i=0;i<numb;i++)cout<<b[i].pl<<" ";
    // cout<<endl;
    // for(int i=0;i<numf;i++)cout<<f[i].val<<" ";
    // cout<<endl;
    // for(int i=0;i<numf;i++)cout<<f[i].pl<<" ";
    // cout<<endl;


    //ans version1.0
    // long long ans=0;
    // for(int i=0;i<numf;i++){
    //     for(int j=0;j<numb;j++){
    //         ans=max(ans,(long long)(-f[i].pl+b[j].pl)*(f[i].val+b[j].val));
    //     }
    // }

    //ans version 2.0
    long long ans=0;
    int k=numb-1;
    for(int i=0;i<numf;i++){
        while(f[i].pl>=b[k].pl && k-1>=0)k--;
        for(int j=0;j<=k;j++){
            ans=max(ans,(long long)(-f[i].pl+b[j].pl)*(f[i].val+b[j].val));
        }
    }

    //cout<<"\n-----\n";
    cout<<ans;
    return 0;
}