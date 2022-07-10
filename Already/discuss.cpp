#include<iostream>
#include<cmath>

using namespace std;
int T;
int n;
int num[50009];
int a[50009][7990];
bool c[50009][7990];
bool ck(int i,int j){
	if(num[i]==0 || num[j]==0)return false;
    bool ok=false;
    bool c1=false;
    bool c2=false;
    int nn=0;//num of min one can solve in larger condition
    if(num[i]>num[j]){
        for(int k=0;k<num[i];k++){
            int nm=a[i][k];
            //if(nn=3)break;
            if(c[i][nm]==true && c[j][nm]==true)ok=true,nn++;
            //if(a[i][nm]==false && a[j][nm]==true && !c1)c1=true,nn++;
            if(c[i][nm]==true && c[j][nm]==false && !c2)c2=true;
        }
        if(nn<num[j])c1=true;
    }
    else{
        for(int k=0;k<num[j];k++){
            int nm=a[j][k];
            //if(nn=3)break;
            if(c[i][nm]==true && c[j][nm]==true)ok=true,nn++;
            if(c[i][nm]==false && c[j][nm]==true && !c1)c1=true;
            //if(a[i][nm]==true && a[j][nm]==false && !c2)c2=true,nn++;
        }
        if(nn<num[i])c2=true;
    }
//    if(ok)cout<<"ok";
//    else cout<<"ok!";
//    if(c1)cout<<"c1";
//    else cout<<"c1!";
//    if(c2)cout<<"c2";
//    else cout<<"c2!";
//    cout<<endl;
    if(ok&&c1&&c2)return true;
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    freopen("discuss.in","r",stdin);
    freopen("discuss.out","w",stdout);
    cin>>T;
    while(T--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num[i];
            for(int j=0;j<num[i];j++){
                int nnn;
                cin>>nnn;
                a[i][j]=nnn;
                c[i][nnn]=true;
            }
        }
        bool get=false;
        for(int i=0;i<n-1;i++){
        	//cout<<123<<endl;
        	if(num[i]==0)continue;
            for(int j=i+1;j<n;j++){
            	//cout<<345<<endl;
            	if(num[j]==0)continue;
                if(ck(i,j)){
                    cout<<"YES"<<endl;
                    cout<<i+1<<" "<<j+1<<endl;
                    get=true;
                }
                if(get)break;
            }
			if(get)break;
        }
        if(!get){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
