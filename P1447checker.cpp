#include<cstdio>
#define re register int
const int N=100010;
int n,m;long long f[N],ans;
int main(){
    scanf("%d%d",&n,&m);
    if(n>m)n^=m^=n^=m; 
    for(re i=n;i;--i){
        f[i]=(long long)(n/i)*(m/i);
        for(re j=i<<1;j<=n;j+=i)f[i]-=f[j];
        ans+=((i<<1)-1)*f[i];
    }
    printf("%lld",ans);
return 0;
}
