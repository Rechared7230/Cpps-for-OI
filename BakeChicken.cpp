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