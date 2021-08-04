#include<iostream>
#include<cstring>
using namespace std;
string s;
int main(){
    char a;
    //freopen("1.txt","w",stdout);
    while(cin>>s){
        for(int i=0;i<s.length();i++){
            a=s[i];
                 if(a=='A'||a=='a'){cout<<"咕呱'";}
            else if(a=='B'||a=='b'){cout<<"呱咕咕咕'";}
            else if(a=='C'||a=='c'){cout<<"呱咕呱咕'";}
            else if(a=='D'||a=='d'){cout<<"呱咕咕'";}
            else if(a=='E'||a=='e'){cout<<"呱'";}
            else if(a=='F'||a=='f'){cout<<"咕咕呱咕'";}
            else if(a=='G'||a=='g'){cout<<"呱呱咕'";}
            else if(a=='H'||a=='h'){cout<<"咕咕咕咕'";}
            else if(a=='I'||a=='i'){cout<<"咕咕'";}
            else if(a=='J'||a=='j'){cout<<"咕呱呱呱'";}
            else if(a=='K'||a=='k'){cout<<"呱咕呱'";}
            else if(a=='L'||a=='l'){cout<<"咕呱咕咕'";}
            else if(a=='M'||a=='m'){cout<<"呱呱'";}
            else if(a=='N'||a=='n'){cout<<"呱咕'";}
            else if(a=='O'||a=='o'){cout<<"呱呱呱'";}
            else if(a=='P'||a=='p'){cout<<"咕呱呱咕'";}
            else if(a=='Q'||a=='q'){cout<<"呱呱咕呱'";}
            else if(a=='R'||a=='r'){cout<<"咕呱咕'";}
            else if(a=='S'||a=='s'){cout<<"咕咕咕'";}
            else if(a=='T'||a=='t'){cout<<"呱'";}
            else if(a=='U'||a=='u'){cout<<"咕咕呱'";}
            else if(a=='V'||a=='v'){cout<<"咕咕咕呱'";}
            else if(a=='W'||a=='w'){cout<<"咕呱呱'";}
            else if(a=='X'||a=='x'){cout<<"呱咕咕呱'";}
            else if(a=='Y'||a=='y'){cout<<"呱咕呱呱'";}
            else if(a=='Z'||a=='z'){cout<<"呱呱咕咕'";}
            else if(a==','){cout<<",";}
            else if(a=='.'){cout<<".";}
            else cout<<a;
        }
        cout<<"  \n";
    }
    return 0;
}