#include<iostream>

using namespace std;

int n,m;
int o[1009];
int f[1009];
int num=0;

int main(){	
	ios::sync_with_stdio(false);
	freopen("kingdom.in","r",stdin); 
    freopen("kingdom.out","w",stdout);
    cin>>m>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            if(a==1)o[j]++;
            else f[j]++;
        }
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        if(a==1 && o[i]>f[i])num++;
        if(a==0 && o[i]<f[i])num++;
    }
    cout<<num;
    return 0;
}
