#include<bits/stdc++.h>
using namespace std;
int n,m;
int o;
int l,r,v;
int a[1000000000];
memset(a,2,sizeof(a));

int gcd(int x, int y){	
    if (y)			
        return gcd(y, x%y);		
    else			
        return x;
}
void f(int n,int l,int r,int v){
    if(n==1){
        for(int i=l;i<=r;i++){
            int num=gcd(a[i],i);
        }
    }
    else if(n==2){}
    else if(n==3){}
    else if(n==4){}
    else if(n==5){}
    else if(n==6){}
    else if(n==7){}
    else if(n==8){}
    else if(n==9){}
    else if(n==10){}

}
int main(){
    
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>o;
        if(o==1)cin>>l>>r;
        else cin>>l>>r>>v;
        
    }
    return 0;
}