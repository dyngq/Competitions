#include <bits/stdc++.h>

using namespace std;

typedef int ElementType;

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
    int k;
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
    while(p->next)
    {
        if(p->data <= n && p->next->data >= n)
        {
            s = (LNode *)malloc(sizeof(LNode));
            s->data = n;
            s->next = p->next;
            p->next = s;
            flag = 1;
            break;
        }
        else
            p = p->next;
    }
    if(flag == 0)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = n;
        p->next = s;
        s->next = NULL;
    }
}

void print_LinkList(LinkList L, int n)
{
    for(int i = 0; i < n; i++)
    {
        L = L->next;
        cout << " " << L->data ;
    }
//    L = L->next;
//    cout << L->data;
}

int main()
{
    LinkList L;
    int n;
    cin >> n;
    creat_list(L, n);
    int k;
    cin >> k;
    insert_list(L, k);
    print_LinkList(L, n+1);
}

/**



**/
