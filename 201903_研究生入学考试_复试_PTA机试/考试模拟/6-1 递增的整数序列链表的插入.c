#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Read()
{
    List head = (List)malloc(sizeof(List));
    head->Next = NULL;
    List tail = head;
    int x;
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        List s = (List)malloc(sizeof(List));
        s->Data = x;
        tail->Next = s;
        tail = s;
        tail->Next = NULL;
    }
    return head;

}

void Print( List L )
{
    List p = L;
    p = p->Next;
    while(p)
    {
        printf("%d ",p->Data);
        p = p->Next;
    }
}

List Insert( List L, ElementType X )
{
    List p = (List)malloc(sizeof(List));
    p = L;
    List q = L->Next;
    int f = 0;
    if(q==NULL)
    {
        List s = (List)malloc(sizeof(List));
        s->Data = X;
        s->Next = NULL;
        L->Next = s;
        return L;
    }
    if(q->Data>=X)
    {
        f = 1;
        List s = (List)malloc(sizeof(List));
        s->Data = X;
        s->Next = L->Next;
        L->Next = s;
        return L;
    }
    while(q!=NULL)
    {
        if(q->Data>=X)
        {
            //printf("2 %d\n",q->Data);
            f = 1;
            List s = (List)malloc(sizeof(List));
            s->Data = X;
            p->Next = s;
            s->Next = q;
            return L;
        }
        q = q->Next;
        p = p->Next;

    }
    if(f==0)
    {
        //printf("1\n");
        List s = (List)malloc(sizeof(List));
        s->Data = X;
        p->Next = s;
        s->Next = NULL;
        return L;
    }
}
