#include <bits/stdc++.h>

using namespace std;

typedef int elementType;

typedef struct lnode
{
    elementType data;
    struct lnode *next;
}Lnode,* LinkList;

void creat_list(LinkList &L,int n)
{
    //L = new Lnode;
    LinkList r;
    L->next=NULL;
    r = L;
    for(int i = 0; i < n; i++)
    {
        LinkList p;
        int temp;
        cin >> temp;
        if(temp == -1)
            return;
        p->data = temp;
//        p = new Lnode;
        //cout << i << " " << endl;
        p->next=NULL;
        r->next=p;
        r = p;
    }
}

void print_list(LinkList L,int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << L->data << " " << endl;
//        p = new Lnode;
        L = L->next;
    }
}

int main()
{
    //int num,ins;
    //LinkList L;
    L = new Lnode;
    int n;
    cin >> n;
    creat_list(L, n);
    //print_list(L, n);
//    int a[10];
//    cout << a[1] <<" "<< a[3];
}
