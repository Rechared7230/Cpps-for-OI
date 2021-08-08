# Cpps-for-OI
 OI' .cpps
> /Collection Palace\
>> This res is used as notes.
>> They are precious experience.Please take good care of them.

``` Maybe,I can collect them together in this place. ```
>>>     Temp
>>>     ## FlName.cpp
>>>     > Updated <Date>
>>>     ```
>>>     Codes.
>>>     ```
>> Come on!    
>> Added Place:    
>> NotesHere!!    
>> memset(a,num,sizeof(a)); Is in headfile <cstring> or <string.h>   


## Aishai.cpp
> Updated 2021.8.4
```
    #include<iostream>
    using namespace std;
    const int M=10000000;
    bool ck[M+1]={};//0zhi 
    int a[M];
    int main(){
        int cnt=1;
        for(int i=2;i<=M;i++){
            if(ck[i]==0){
                a[cnt]=i;
                cnt++;
                for(int j=2;j<=M/i;j++){
                    ck[i*j]=1;
                }
            }
        }
        cout<<cnt-1;
        return 0;
    }
```
## Bqbj.cpp
> Updated 2021.8.5
```
    #include<iostream>
    using namespace std;
    int main(){
        for(int a=0;a<21;a++){
            for(int b=0;b<=(100-5*a)/3;b++){
                int z=100-5*a-3*b;
                cout<<a<<" "<<b<<" "<<z*3<<"\n";
            }
        }
        return 0;
    }
```
## Hxdb.cpp
> Updated 2021.8.5
```
    #include<iostream>
    using namespace std;
    int main(){
        int ans;
        for(ans=1;;ans++){
            if(ans%3==1&&ans%5==2&&ans%7==3)break;
        }
        cout<<ans;
        return 0;
    }
```
## P2550.cpp
> Updated 2021.8.5
```
    #include<iostream>
    using namespace std;
    int a[7];
    int j[7];
    int main(){
        int n;cin>>n;
        for(int i=0;i<7;i++)cin>>a[i];
        int num,res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>num;
                for(int k=0;k<7;k++){
                    num==a[k]? res++ : res+=0;
                }
            }
            j[res]++;
            res=0;
        }
        for(int i=6;i>=0;i++)cout<<j[i]<<" ";
        return 0;
    }
```
## Sxhs.cpp
> Updated 2021.8.5
```
    #include<iostream>
    using namespace std;
    int main(){
        int a,b,c;
        for(a=1;a<=9;a++){
            for(b=0;b<=9;b++){
                for(c=0;c<=9;c++){
                    if(a*100+b*10+c==a*a*a+b*b*b+c*c*c)cout<<a<<b<<c<<endl;
                }
            }
        }
        // int num;
        // for(int i=0;i<=999;i++){
        //     a=i/100;
        //     b=i/10-a*10;
        //     c=i%10;
        //     if(i==a*a*a+b*b*b+c*c*c)cout<<i<<endl;
        // }
        return 0;
    }
```
## Weigh.cpp
> Updated 2021.8.5
```
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        // int a=1,b=2,c=5,d=10,e=20,f=50;
        // //cin>>a>>b>>c>>d>>e>>f;
        // int wei[10001];
        // memset(wei,-1,sizeof(wei));
        // int ans;
        // for(int a1=0;a*a1<=1000;a1++){
        //     for(int b1=0;b1*b<=1000-a*a1;b1++){
        //         for(int c1=0;c1*c<=1000-a*a1-b*b1;c1++){
        //             for(int d1=0;d*d1<=1000-a*a1-b*b1-c*c1;d1++){
        //                 for(int e1=0;e1*e<=1000-a*a1-b*b1-c*c1-d*d1;e1++){
        //                     for(int f1=0;f*f1<=1000-a*a1-b*b1-c*c1-d*d1-e*e1;f1++){
        //                         wei[a*a1+b*b1+c*c1+d*d1+e*e1+f*f1]=1;
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }
        // for(int i=1;i<1001;i++){
        //     if(wei[i]>0)ans++;
        // }
        // cout<<ans;
        return 0;
    }
```
## Ftwt.cpp
> Updated 2021.8.6
```
    #include<iostream>//O(2^n)
    using namespace std;
    void move(int n,char a,char b,char c){//a:Source of plate;b:Cache;c:Target plate;
        if(n==1){
            cout<<a<<"->"<<c<<endl;
        }
        else{
            move(n-1,a,c,b);
            cout<<a<<"->"<<c<<endl;
            move(n-1,b,a,c);
        }
        return;
    }
    int main(){
        int n;
        cin>>n;
        move(n,'a','b','c');
        return 0;
    }
```
## Hcbds.cpp
> Updated 2021.8.6
```
    #include<iostream>
    using namespace std;
    int x[10]={6,2,5,5,4,5,5,3,7,6};
    int main(){
        int n;
        cin>>n;
        n-=4;
        int a,b,c;
        int ca;
        for(a=0;a<10;a++){
            for(b=0;b<10;b++){
                if(a+b>9){
                    ca=x[(a+b)/10]+x[(a+b)%10];
                }
                else ca=x[a+b];
                
            }
        }
        return 0;
    }
    //Fuck!
```
## Xzkz.cpp
> Updated 2021.8.6
```
    #include<iostream>
    using namespace std;
    int s[51];
    struct kz{
        int xh;
        int sd;
        int xf;
        int c;
    }z[200000];
    // int main(){
    //     int n,p;
    //     cin>>n>>p;
    //     int ans;
    //     for(int i=1;i<=n;i++)cin>>z[i].xh>>z[i].sd>>z[i].xf;
    //     for(int i=1;i<n;i++){
    //         for(int j=2;j<=n;j++){
    //             if(z[i].sd!=z[j].sd)continue;
    //             bool ck=false;
    //             for(int st=i,ed=j;st<ed;st++){
    //                 if(z[st].xf<=p)ck=true;
    //             }
    //             if(ck)ans++;
    //         }
    //     }
    //     cout<<ans;
    //     return 0;
    // }
    //O(n^3)

    int main(){
        int n,p;
        cin>>n>>p;
        int ans;
        z[0].c=0;
        for(int i=1;i<=n;i++)cin>>z[i].xh>>z[i].sd>>z[i].xf;
        for(int i=1;i<=n;i++){
            if(z[i].xf<=p)z[i].c=z[i-1].c+1;
            else z[i].c=z[i-1].c;
        }
        for(int i=1;i<n;i++){
            for(int j=2;j<=n;j++){
                if(z[i].sd!=z[j].sd)continue;          
                if(z[j].c-z[i].c>0)ans++;
            }
        }
        cout<<ans;
        return 0;
    }//O(n^2)
    //Msybe you can use next[i] to mark these houses that have the same color,and change j++ into j=next[j];
```
## DFS-algorithm-zmg.cpp
> Updated 2021.8.6
```
    #include<iostream>
    using namespace std;
    int a[100][100];//1false 0 true
    bool visit[100][100];
    int stn,stm,edn,edm;
    int n,m;
    int minn=0xf7f7f7;
    void dfs(int x,int y,int pathlength){
        if(x==edn&&y==edm){
            if(minn>pathlength)minn=pathlength;
            return ;
        }
        //left
        if(!a[x][y-1] && !visit[x][y-1] && x,y-1>=1 && x<=n && y-1<=m){
            visit[x][y-1]=1;
            dfs(x,y-1,pathlength+1);
            visit[x][y-1]=0;
        }
        //right
        if(!a[x][y+1] && !visit[x][y+1] && x,y+1>=1 && x<=n && y+1<=m){
            visit[x][y+1]=1;
            dfs(x,y+1,pathlength+1);
            visit[x][y+1]=0;
        }
        //up
        if(!a[x-1][y] && !visit[x-1][y] && x-1,y>=1 && x-1<=n && y<=m){
            visit[x-1][y]=1;
            dfs(x-1,y,pathlength+1);
            visit[x-1][y]=0;
        }
        //down
        if(!a[x+1][y] && !visit[x+1][y] && x+1,y>=1 && x+1<=n && y<=m){
            visit[x+1][y]=1;
            dfs(x+1,y,pathlength+1);
            visit[x+1][y]=0;
        }

    }
    int main(){
        
        cin>>n>>m;//a[n][m]
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        int stn,stm,edn,edm;
        cin>>stn>>stm>>edn>>edm;
        dfs(stn,stm,0);
        cout<<minn;
        return 0;
    }
```
## BFS-slgorithm-zmg.cpp
> Updated 2021.8.7
```
    #include<iostream>
    #include<queue>
    using namespace std;

    int a[100][100],v[100][100];//a[i][j]:0 can  1 cannot  v[i][j]: 0 not  1 visit
    struct point{
        int x,y,step;
    };
    queue <point> r;
    int bx[4]={0,1,0,-1};//right down left up
    int by[4]={1,0,-1,0};//right down left up

    int main(){
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        int stx,sty,x,y;
        cin>>stx>>sty>>x>>y;
        point stp;
        stp.x=stx;
        stp.y=sty;
        r.push(stp);
        bool flag=false;
        v[stx][sty]=1;
        while(!r.empty()){
            if(r.front().x==x && r.front().y==y){
                flag=true;
                cout<<r.front().step;
                break;
            }
            for(int i=0;i<4;i++){
                int ax,ay;
                ax=r.front().x+bx[i];
                ay=r.front().y+by[i];
                if(!a[ax][ay] && !v[ax][ay]){
                    point temp;
                    temp.x=ax;
                    temp.y=ay;
                    temp.step=r.front().step+1;
                    r.push(temp);
                    v[ax][ay]=1;
                }
            }
            r.pop();
        }
        if(!flag)cout<<"No Answer!!!Fuck & Shit";
        return 0;
    }
```
## Nhh.cpp
> Updated 2021.8.7
```
    #include<iostream>
    using namespace std;
    int a[13];//a[i]:- i  | a[i]
    int n;
    int ans;
    bool check(int row,int n){
        for(int i=0;i<row;i++){
            if(a[i]==n)return false;
            if(row+n==a[i]+i)return false;
            if(row-n==i-a[i])return false;
        }
        return true;
    }
    void dfs(int row){
        if(row==n){
            ans++;
            return;
        }
        for(int i=0;i<n;i++){
            if(check(row,i)){
                a[row]=i;
                dfs(row+1);
                a[row]=0;
            }
        }
    }
    int main(){
        cin>>n;
        dfs(0);
        cout<<ans;
        return 0;
    }
```
## Shelter.cpp
> Updated 2021.8.8
```
    #include<iostream>
    using namespace std;

    void slove();
    int main(){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            slove();
        }
        return 0;
    }
    void slove(){
        int n,p,q;
        cin>>n>>p>>q;
        int line;
        //bool isji=false;
        //if(n&1)isji=true;
        if(p==0&&q==0){cout<<0<<"\n";return ;}
        if(n==1){
            cout<<p<<"\n";
            return ;
        }
        for(int i=2;i<=n;i++){
            int ca;
            if((n-i)&1){
                ca=2*i+1;
                if(ca*p<q){line =i-1;break;}
            }
            else{
                ca=2*i-1;
                if(ca*p<q){line=i-2;break;}
            }
        }
        int ans;
        ans=line*(line+1)*p/2+(n-line)*q/2;
        cout<<ans<<"\n";
        return ;
    }
```
## BakeChicken.cpp
>> Updated 2021.8.8
```
    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        int ans;
        if(n>30){cout<<0;return 0;}
        for(int i1=1;i1<4;i1++){
        for(int i2=1;i2<4;i2++){
        for(int i3=1;i3<4;i3++){
        for(int i4=1;i4<4;i4++){
        for(int i5=1;i5<4;i5++){
        for(int i6=1;i6<4;i6++){
        for(int i7=1;i7<4;i7++){
        for(int i8=1;i8<4;i8++){
        for(int i9=1;i9<4;i9++){
        for(int i0=1;i0<4;i0++){
        if(i1+i2+i3+i4+i5+i6+i7+i8+i9+i0==n){
        ans++;
        cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<" "<<i5<<" "<<i6<<" "<<i7<<" "<<i8<<" "<<i9<<" "<<i0<<"\n";
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        cout<<ans;
        return 0;
    }
```
> Update 2021.8.8#2   
>> Changed the output form to AC this question.
```
    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        int ans;
        if(n>30){cout<<0;return 0;}
        for(int i1=1;i1<4;i1++){
        for(int i2=1;i2<4;i2++){
        for(int i3=1;i3<4;i3++){
        for(int i4=1;i4<4;i4++){
        for(int i5=1;i5<4;i5++){
        for(int i6=1;i6<4;i6++){
        for(int i7=1;i7<4;i7++){
        for(int i8=1;i8<4;i8++){
        for(int i9=1;i9<4;i9++){
        for(int i0=1;i0<4;i0++){
        if(i1+i2+i3+i4+i5+i6+i7+i8+i9+i0==n){
        ans++;
        //cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<" "<<i5<<" "<<i6<<" "<<i7<<" "<<i8<<" "<<i9<<" "<<i0<<"\n";
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        //if(n>30){cout<<0;return 0;}
        cout<<ans<<endl;
        for(int i1=1;i1<4;i1++){
        for(int i2=1;i2<4;i2++){
        for(int i3=1;i3<4;i3++){
        for(int i4=1;i4<4;i4++){
        for(int i5=1;i5<4;i5++){
        for(int i6=1;i6<4;i6++){
        for(int i7=1;i7<4;i7++){
        for(int i8=1;i8<4;i8++){
        for(int i9=1;i9<4;i9++){
        for(int i0=1;i0<4;i0++){
        if(i1+i2+i3+i4+i5+i6+i7+i8+i9+i0==n){
        //ans++;
        cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<" "<<i5<<" "<<i6<<" "<<i7<<" "<<i8<<" "<<i9<<" "<<i0<<"\n";
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        //cout<<ans;
        return 0;
    }
```
## CountFx.cpp
> Updated 2021.8.8
```
    #include<iostream>
    #include<windows.h>
    using namespace std;
    int main(){
        int n,m;
        cin>>n>>m;
        cout<<n<<m;
        Sleep(10000);
        int zfx=0,cfx=0;
        for(int i=0;i<n;i++){
            for(int j=0;i<m;j++){
                for(int p=1;p<=n;p++){
                    for(int q=1;q<=m;q++){
                        if(p-i==q-j){
                            zfx=zfx+1;
                        }
                        else {cfx+=1;}
                        cout<<zfx<<" "<<cfx<<endl;;
                    }
                }
            }
        }
        
        return 0;
    }
```
## ThreeClick.cpp
> Updated 2021.8.8
```
    #include<iostream>
    using namespace std;
    //int a[9]={1,2,3,4,5,6,7,8,9};
    int main(){
        int a,b,c;
        cin>>a>>b>>c;
        bool check=false;
        for(int i=1;i<10;i++){
            for(int j=1;j<10&&j!=i;j++){
                for(int k=1;k<10&&k!=i&&k!=j;k++){
                    int n[9]={0,0,0,0,0,0,0,0,0};
                    int A,B,C;
                    A=i*100+j*10+k;
                    B=A*b/a;
                    C=A*c/a;
                    if(B>999||C>999)continue;
                    n[i]=1;n[j]=1;n[k]=1;
                    n[B/100]++;
                    n[B/10-(B/100)*10]++;
                    n[B%10]++;
                    n[C/100]++;
                    n[C/10-(C/100)*10]++;
                    n[C%10]++;
                    bool ck=true;
                    for(int x=0;x<9;x++){
                        if(n[x]>=2)ck=false;
                        
                    }
                    if(ck){
                        cout<<A<<" "<<B<<" "<<C<<"\n";
                        check=true;
                    }
                }
            }
        }
        if(!check)cout<<"No!!!";
        return 0;
    }
```
## ChooseNumber.cpp
> Updated 2021.8.8
```
    //FUCKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK!
    #include<iostream>
    #include<cmath>
    using namespace std;
    int a[20];
    bool ck[20];
    int n;
    int ans;
    bool isss(int num){
        for(int i=0;i<sqrt(num);i++){
            if(!num%i){return false;}
        }
        return true;
    }
    int cac;
    int dfs(int nu){
        if(nu==0){
            if(isss(cac))ans++;
            return ;
        }

    }
    int main(){
        int k;
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>a[i];
        dfs(k);
        return 0;
    }
```
## ChooseCoins.cpp
> Updated 2021.8.8
```
    #include<iostream>
    #include<cmath>
    using namespace std;
    const int N=0xf7f7f;
    int main(){
        //MEMSET(A,N);
        int a[30]={0,N,1,N,2,1,3,1,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N,N};
        int b[3]={2,5,7};
        //int res=N;
        for(int i=8;i<=27;i++){
            //a[i]=min(res,min(a[i-2]+1,min(a[i-5]+1,a[i-7]+1)));
            for(int j=0;j<3;j++){
                a[i]=min(a[i],a[i-b[j]]+1);
            }
        }
        cout<<a[27];
        return 0;
    }
```
## UniquePaths.cpp
> Updated 2021.8.8
```
    #include<iostream>
    using namespace std;
    int main(){
        int n,m;
        cin>>n>>m;//From 0,0 to n,m
        int a[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0){
                    a[i][j]=1;
                }
                else a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
        cout<<a[n][m];

        return 0;
    }
```
## JumpGame.cpp
> Updated 2021.8.8
```
    #include<iostream>
    #include<cstdlib>
    #include<cstring>
    using namespace std;
    const int N=100;
    int main(){
        int n;
        cin>>n;
        int a[N];
        bool ck[N];
        memset(ck,0,sizeof(ck));
        for(int i=0;i<n;i++)cin>>a[i];
        int tar;
        cin>>tar;
        ck[0]=1;
        for(int i=0;i<tar;i++){
            if(ck[i]){
                for(int j=i;j<=i+a[i];j++){
                    ck[j]=true;
                }
            }
        }
        for(int i=0;i<=tar;i++)cout<<ck[i];
        cout<<endl;

        if(ck[tar])cout<<"Yes!!!";
        else cout<<"No!!!";
        return 0;
    }
```
## NumThreeCorner.cpp
> Updated 2021.8.8
```
    #include<iostream>
    #include<cmath>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        int a[1000][1000];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                a[i][j]+=max(a[i-1][j-1],a[i-1][j]);
            }
        }
        int ans;
        for(int i=1;i<=n;i++){
            ans=max(ans,a[n][i]);
        }
        cout<<ans;
        
        return 0;
    }
```