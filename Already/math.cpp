#include<iostream>
#include<cmath>

using namespace std;

unsigned long long z,x,y,finy;

inline unsigned long long gcd(unsigned long long a,unsigned long long b) {
    while(b^=a^=b^=a%=b);
    return a;
}
int main(){
	ios::sync_with_stdio(false);
	freopen("math.in","r",stdin); 
	freopen("math.out","w",stdout);
    int T;
    cin>>T;
    while(T--){
		finy=0x8000000000000000;
        bool has=false;
        cin>>x>>z;
        z/=x;
        if(z%x==0 && z>=x){
			cout<<z/x<<endl;
			continue;
		}
        unsigned long long ite=min(x,z);
        for(unsigned long long i=1;i<=ite;i++){
            if(x%i==0){
                y=z/i;
                if(i==gcd(x,y))finy=min(y,finy),has=true;
            }
        }
        if(has)cout<<finy<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
