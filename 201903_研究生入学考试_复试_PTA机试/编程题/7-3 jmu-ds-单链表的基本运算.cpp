#include <bits/stdc++.h>

using namespace std;

typedef char ElementType;

typedef struct LNode{
    ElementType data;
    struct LNode *next;
}LNode, *LinkList;

LinkList creat_list(LinkList &L, int n)
{
    /****/
    L = (LinkList)malloc(sizeof(LNode));
    /****/
    LNode *s;
    LNode *r = L;
    char k;
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        s = (LNode *)malloc(sizeof(LNode));
        s -> data = k;
        r -> next = s;
        r = s;
    }
    r -> next = NULL;
    return L;
}

LinkList insert_list(LinkList &L, int n)
{
    LNode *s;
    LNode *p;
    p = L;
    int flag = 0;
    int i = 0;
    while(p->next)
    {
        if(i == n-1)
        {
            s = (LNode *)malloc(sizeof(LNode));
            s->data = 'x';
            s->next = p->next;
            p->next = s;
            flag = 1;
            break;
        }
        else
        {
            i++;p = p->next;
        }

    }
    if(flag == 0)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = 'x';
        p->next = s;
        s->next = NULL;
    }
}
LinkList delete_list(LinkList &L, int n)
{
    LNode *q;
    LNode *p;
    p = L;
    q = L->next;
    int flag = 0;
    int i = 0;
    while(q->next)
    {
        if(i == n-1)
        {
            p->next = q->next;
            flag = 1;
            break;
        }
        else
        {
            i++;p = p->next;q=q->next;
        }

    }
//    if(flag == 0)
//    {
//        s = (LNode *)malloc(sizeof(LNode));
//        s->data = 'x';
//        p->next = s;
//        s->next = NULL;
//    }
}
void print_LinkList(LinkList L, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        L = L->next;
        cout << L->data << " " ;
    }
    L = L->next;
    cout << L->data;
}
void print_LinkList_k(LinkList L, int k,int n)
{
    for(int i = 0; i < n; i++)
    {

        L = L->next;
        if(i==k)
        {
            cout << L->data << endl;
            break;
        }
    }
}
void print_LinkList_pos(LinkList L, char p,int n)
{
    for(int i = 0; i < n; i++)
    {

        L = L->next;
        if(L->data==p)
        {
            cout << i+1 << endl;
            break;
        }
    }
}

int main()
{
    LinkList L;
    cout << "0" << endl;
    int n;
    cin >> n;
    creat_list(L, n);
    print_LinkList(L, n);
    cout << endl << n << endl;
    int k;
    if(n>0)
        cout << "no";
    else
        cout << "yes";
    cout << endl;
    print_LinkList_k(L, 2, n);
    //cin >> k;
    print_LinkList_pos(L, 'a', n);
    insert_list(L, 4);
    print_LinkList(L, n+1);
    delete_list(L, 3);
    cout<<endl;
    print_LinkList(L, n);
}

/**



**/
