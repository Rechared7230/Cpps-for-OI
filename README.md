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