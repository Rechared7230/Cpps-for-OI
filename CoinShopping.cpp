#include<iostream>
using namespace std;
int main(){
    int c1,c2,c3,c4;
    int n;
    cin>>c1>>c2>>c3>>c4>>n;
    for(int i=0;i<n;i++){
        int d1,d2,d3,d4;
        cin>>d1>>d2>>d3>>d4;
        int s;
        cin>>s;
        int ans=0;
        for(int a1=0;a1<=s/c1&&a1<=d1;a1++){
            for(int a2=0;a2<=s/c2&&a2<=d2;a2++){
                for(int a3=0;a3<=s/c3&&a3<=d3;a3++){
                    for(int a4=0;a4<=s/c4&&a4<=d4;a4++){
                        if(a1*c1+a2*c2+a3*c3+a4*c4==s){
                            ans++;
                            cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" \n";
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}