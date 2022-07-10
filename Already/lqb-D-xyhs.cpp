#include<iostream>
#include<vector>

using namespace std;
int a[100000];
vector <int> an[100000];
int main(){
    int n,m,x;
    cin>>n>>m>>x;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        int ss=x^a[i];
        for(int j=0;j<n;j++){
            //if(a[i]==ss && i!=j)an[i]=true;
            if(a[i]==ss && i!=j){
                an[i].push_back(j);
                an[j].push_back(i);
            }
        }
    }
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        for(int j=l;j<=r;j++){
            while(!an[j].empty()){
                if(an[j].back()<=r && an[j].back()>=r){
                    cout<<"yes\n";
                    break;
                }
            }
        }
    }
    return 0;
}