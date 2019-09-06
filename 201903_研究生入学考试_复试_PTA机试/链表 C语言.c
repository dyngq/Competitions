#include <stdio.h>

typedef int ElementType;

typedef struct LNode
{
    ElementType data;
    struct LNode *next;
}LNode, *LinkList;

void creat_list(LinkList *L, int n)
{
    *L = (LinkList)malloc(sizeof(LinkList));
    LNode *s = *L;
    LNode *r;
    int temp;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&temp);
        r = (LNode *)malloc(sizeof(LNode *));
        r -> data = temp;
        s -> next = r;
        s = s -> next;
    }
    s->next = NULL;

}

void print_LinkList(LinkList L)
{
    //L = L->next;
    while(L != NULL)
    {
        printf("%d ",L->data);
        L = L->next;
    }
    printf("\n");
}

LinkList reverse_LinkList(LinkList *L)
{
    LNode *p = *L;
    LNode *q, *s;
    //p = p->next;
    if(  (p == NULL) || (p != NULL && p->next == NULL)  )
        return L;
    else if(p!=NULL && p->next != NULL && p->next->next==NULL)
    {
        s = p->next;
        s -> next = p;
        p -> next = NULL;
        *L = s;
        return L;
    }
    else
    {
        s = p -> next;
        q = p -> next -> next;
        p -> next = NULL;
        while(q != NULL)
        {
            s -> next = p;
            p = s;
            s = q;
            q = q->next;
        }
        s -> next = p;
        *L = s;
        return L;
    }
}

int main()
{
    LinkList L;
    //L = (LinkList)malloc(sizeof(LNode));
    int n;
    scanf("%d",&n);
    creat_list(&L, n);
    L = L->next;    /**不带头结点**/
    print_LinkList(L);
    reverse_LinkList(&L);
    print_LinkList(L);
    return 0;
}
