#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int a[5][5]={
{1,2,3,4,5},
{0,2,5,10,14},
{0,2,6,10,13},
{0,2},
{0,2}};

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        cout<<a[n-1][k-1]<<endl;
    }
    return 0;
}