#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int mx=-1,my=-1,ix=0x7f7f7f7f,iy=0x7f7f7f7f;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        ix=min(ix,x);
        iy=min(y,iy);
        mx=max(mx,x);
        my=max(y,my);
    }
    cout<<max(mx-ix,my-iy)*max(mx-ix,my-iy);
    return 0;
}