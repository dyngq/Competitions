#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct LNode
{
    ElementType data;
    struct LNode *next;
}LNode, *LinkList;

int main()
{
    int n;
    scanf("%d",&n);
    //n = 11;
    LinkList L;
    L = (LNode *)malloc(sizeof(LNode));
    LNode *p;
    LNode *q = L;
    for(int i = 0; i < n; i++)//ºó²å·¨
    {
        p = (LNode *)malloc(sizeof(LNode));
        p -> data = i+1;
        q -> next = p;
        q = p;
    }
    q -> next = L -> next;
    L = L -> next;
    for(int i = 1; 1;i++)
    {
        if(i%3 == 2)
            L -> next = L -> next -> next;
        else
            L = L -> next;
        //printf("%d ",L->data);
        if(L == L->next)
            break;
    }

//    LNode *out = L->next;
//    for(int i = 0; 1; i++)//Êä³ö
//    {
//        printf("%d ",out->data);
//        out = out -> next;
//    }

    printf("%d",L->data);
    return 0;
}
