#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;
int a[1000009];
int b[1000009];
string s;
int n;
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    cin>>s;
    int nn=0;
    int num=0;
    //int nnnn=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(nn==0 && num!=0)continue;
            else {
                b[num]=nn;
                num++;
                //nnnn++;
                nn=0;
            }
        }
        else if(s[i]=='0'){
            nn++;
        }
    }
    b[num]=nn;
    num++;
    if(num==2){
        if(b[0]>=b[1]){
            cout<<max(b[0]-1,b[1])+1;
        }
        else cout<<max(b[1]-1,b[0])+1;
        return 0;
    }
    //for(int i=0;i<num;i++)cout<<b[i];
    //cout<<endl;
    if(b[0]>0)b[0]--;
    if(b[num-1]>0)b[num-1]--;
    for(int i=1;i<num-2;i++){
        if(b[i]>=b[i+1])b[i]--;
        else b[i-1]--;
    }
    int ans;
    ans=max(b[0],b[num-1]);
    for(int i=1;i<num-1;i++){
        ans=max(ans,b[i]/2);
    }
    cout<<ans+1;
    return 0;
}