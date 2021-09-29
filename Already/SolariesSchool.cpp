#include<iostream>
#include<algorithm>
using namespace std;
struct stu{
    int a,b,c;
    int no;
    int al;
}a[300];
bool cmp(stu a,stu b){
    if(a.al>b.al) return 1;
    else if(a.al<b.al) return 0;
    else{
        if(a.a>b.a) return 1;
        else if(a.a<b.a) return 0;
        else{
            if(a.no>b.no) return 0;
            else return 1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i].no=i;
        cin>>a[i].a>>a[i].b>>a[i].c;
        a[i].al=a[i].a+a[i].b+a[i].c;
    }
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=5;i++)cout<<a[i].no<<" "<<a[i].al<<endl;
    return 0;
}