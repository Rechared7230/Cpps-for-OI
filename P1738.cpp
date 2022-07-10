#include<iostream>
#include<set>
#include<cstring>
#include<string>

using namespace std;
set<string>st;
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        string cac;
        for(int j=1;j<s.length();j++){
            cac+=s[j];
            if(s[j]=='/'){
                st.insert(cac);
            }
        }
        st.insert(cac);
        cout<<st.size()<<endl;;
    }
    
    return 0;
}