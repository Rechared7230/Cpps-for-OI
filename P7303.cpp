#include<iostream>

using namespace std;
int k,n;
int main(){
    cin>>k>>n;
    int cac=0;
    for(int i=1;i<n;i++){
        cout<<i<<endl;
        cac+=i;
    }
    cout<<k-cac;
    return 0;
}