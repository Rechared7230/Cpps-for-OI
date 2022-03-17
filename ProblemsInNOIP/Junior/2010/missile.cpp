#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
queue < pair<int,int> > q;
int x1,x2,ya,y2;
int n;
int r12,r22;
int dist(int dx,int dy){
    if( ((dx-x1)*(dx-x1) + (dy-ya)*(dy-ya)) > ((dx-x2)*(dx-x2) + (dy-y2)*(dy-y2))){
        return 2;
    }
    else if( ((dx-x1)*(dx-x1) + (dy-ya)*(dy-ya)) < ((dx-x2)*(dx-x2) + (dy-y2)*(dy-y2)) ){
        return 1;
    }
    else return 3;
}
int main(){
    cin>>x1>>ya>>x2>>y2;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(dist(x,y)==1){
            r12=max(r12,(x-x1)*(x-x1) + (y-ya)*(y-ya));
        }
        else if(dist(x,y)==2){
            r22=max(r22,(x-x2)*(x-x2) + (y-y2)*(y-y2));
        }
        else if(dist(x,y)==3){
            q.push(make_pair(x,y));
        }
    }
    //cout<<r12<<" "<<r22<<endl;
    while(!q.empty()){
        pair<int,int>a;
        a=q.front();
        q.pop();
        int x=a.first,y=a.second;
        if((x-x1)*(x-x1) + (y-ya)*(y-ya) <= r12 || (x-x2)*(x-x2) + (y-y2)*(y-y2) <= r22){
            continue;
        }
        else if(r12 - (x-x1)*(x-x1) + (y-ya)*(y-ya) <=r22 - (x-x1)*(x-x1) + (y-ya)*(y-ya)) {r12 = (x-x1)*(x-x1) + (y-ya)*(y-ya);}
        else {r22 = (x-x1)*(x-x1) + (y-ya)*(y-ya);}
    }
    cout<<r12+r22;
    return 0;
}
