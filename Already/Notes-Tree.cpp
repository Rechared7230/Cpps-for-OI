#include<iostream>
#include<cstring>
using namespace std;
int n;
const int N=1000;
struct node{
    int value;
    node *leftchild, *rightchild;
    int id; // 结点编号。
    node *parent; // 指向父亲结点。
} arr[N];
int top=-1;
node * head = NULL;
#define NEW(p) p=&arr[++top]; p->leftchild=NULL; \
p->rightchild=NULL; p->value=0
#define parent(r) (((r)-1)/2) 
#define leftchild(r) ((r)*2+1)
#define rightchild(r) ((r)*2+2)
#define leftsibling(r) ((r)-1) 
#define rightsibling(r) ((r)+1)
#define isleaf(r) ((r)>=n/2) 
//前序遍历
void preorder(node *p){
    if(p==NULL)return ;
    cout<<p->value<<" ";
    preorder(p->leftchild);
    preorder(p->rightchild);
}
//中序遍历
void inorder(node *p){
    if (p==NULL) return;
    inorder(p->leftchild);
    cout<<p->value<<' ';
    inorder(p->rightchild);
}
//后序遍历
void postorder(node *p){
    if (p==NULL) return;
    postorder(p->leftchild);
    postorder(p->rightchild);
    cout<<p->value<<' ';
}
//BFS
node *q[N];
void BFS(node *p){
    if (p==NULL) return;
    int front=1,rear=2;
    q[1]=p;
    while (front<rear){
        node *t = q[front++];
        // 处理结点t
        cout<<t->value<<' ';
        if (t->leftchild!=NULL) q[rear++]=t->leftchild;
        if (t->rightchild!=NULL) q[rear++]=t->rightchild;
    }
    //对于完全二叉树，可以直接遍历：
    //for (int i=0; i<n; i++) cout<<a[i]<<' ';
}
//中序＋后序→前序
void preorder(int n, char *pre, char *in, char *post){
    if (n<=0) return;
    int p=strchr(in, post[n-1])-in;
    pre[0]=post[n-1];
    preorder(p, pre+1, in, post);
    preorder(n-p-1, pre+p+1, in+p+1, post+p);
}
//前序＋中序→后序
void postorder(int n, char *pre, char *in, char *post){
    if (n<=0) return;
    int p=strchr(in, pre[0])-in;
    postorder(p, pre+1, in, post);
    postorder(n-p-1, pre+p+1, in+p+1, post+p);
    post[n-1]=pre[0];
}
//前序＋后序→中序
//“中＋前”和“中＋后”都能产生唯一解，但是“前＋后”有多组解。下面输出其中一种。
bool check(int n, char *pre, char *post){ // 判断pre、post是否属于同一棵二叉树
    bool b;
    for (int i=0; i<n; i++){
        b=false;
        for (int j=0; j<n; j++)
            if (pre[i]==post[j]){
                b=true;
                break;
            }
        if (!b) return false;
    }
    return true;
}
void inorder(int n, char *pre, char *in, char *post){
    if (n<=0) return;
    int p=1;
    while (check(p, pre+1, post)==false && p<n)
        p++;
    if (p>=n) p=n-1; // 此时，如果再往inorder里传p，pre已经不含有效字符了。
    inorder(p, pre+1, in, post);
    in[p]=pre[0];
    inorder(n-p-1, pre+p+1, in+p+1, post+p);
}
//求二叉树的直径*
// 结点编号从1开始，共n个结点。
// struct node
// {
// int v;
// node *parent, *leftchild, *rightchild;
// } , 
node *p,a[1001];
int maxd;
bool T[1003];
#define t(x) T[((x)==NULL)?0:((x)-a+1)]
node *p;
void DFS(node * x, int l){
    if (l>maxd) maxd=l, p=x;
    if (x==NULL) return;
    t(x)=false;
    if (t(x->parent)) DFS(x->parent, l+1);
    if (t(x->leftchild)) DFS(x->leftchild, l+1);
    if (t(x->rightchild)) DFS(x->rightchild, l+1);
}
int distance(node *tree){ // tree已经事先读好
    maxd=0;
    memset(T, 0, sizeof(T));
    for (int i=1; i<=n; i++)
    T[i]=true;
    DFS(tree,0);
    maxd=0;
    memset(T, 0, sizeof(T));
    for (int i=1; i<=n; i++) T[i]=true;
    DFS(p,0);
    return maxd;
}

int main(){

    return 0;
}