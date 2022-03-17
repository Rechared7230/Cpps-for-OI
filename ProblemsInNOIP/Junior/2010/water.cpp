#include<iostream>
#include<queue>

using namespace std;
int n,m,w[10009];
priority_queue<int,vector<int>,greater<int> >q;//min root dui
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>w[i];
    for(int i=0;i<m;i++)q.push(w[i]);
    for(int i=m;i<n;i++){
        int a=q.top();
        q.pop();
        a+=(w[i]);
        q.push(a);
    }
    for(int i=0;i<m-1;i++){
        q.pop();
    }
    cout<<q.top();
    return 0;
}