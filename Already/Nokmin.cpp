#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
using namespace std;
priority_queue<int> a;
int main(){
    int n;
    cin>>n;
    int ca;
    for(int i=0;i<n;i++){
        cin>>ca;
        a.push(0-ca);
    }
    int k=a.size();
    cout<<k<<endl;;
    for(int i=0;i<k;i++){
        cout<<0-a.top()<<" ";
        a.pop();
    }
    return 0;
}