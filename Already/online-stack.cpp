#include<iostream>
#include<stack>
using namespace std;
int n,q;
int a[500009],b[500009];
int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    for(int ite=0;ite<q;ite++){
        int ans=1;
        int l,r;
        cin>>l>>r;
        stack<int> s;
        s.push(l);
        for(int i=l+1;i<=r;i++){
            while(a[i] == a[s.top()] || b[i] >= b[s.top()]){
                //if(s.empty())break;
                s.pop();
                if(s.empty())break;
            }
            if(s.empty())ans++;
            s.push(i);
        }
        cout<<ans<<endl;
    }
    return 0;
}