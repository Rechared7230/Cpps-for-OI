#include<iostream>

using namespace std;
int sum;
int t,n;
int p;
int main(){
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>p;
            if(p<0){
                cout<<"1 ";
                sum++;
            }
            else {
                cout<<p-sum<<" ";
                sum=p;
            }
        }
        cout<<"\n";
    }
    return 0;
}