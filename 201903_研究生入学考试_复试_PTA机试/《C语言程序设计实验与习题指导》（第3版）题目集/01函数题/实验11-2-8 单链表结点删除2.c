#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist()
{
    struct ListNode *L = (struct ListNode*)malloc(sizeof(struct ListNode)),*p,*q;
    L -> next =  NULL;
    p = L;
    int a;
    while(1)
    {
        scanf("%d",&a);
        if(a==-1)
            break;
        q = (struct ListNode*)malloc(sizeof(struct ListNode));
        q -> data = a;
        p -> next = q;
        p = q;
    }
    p -> next = NULL;
    L = L->next;
    return L;
}
struct ListNode *deletem( struct ListNode *L, int m )
{

    while(1)
    {
        if(L->data != m)
            break;
        else
        {
            if(L->next ==NULL)
            {
                L = NULL;
                break;
            }
            else
                L = L->next;
        }
    }
    struct ListNode *p = L;
    if(L==NULL)
        return L;
    else
    {
        while(p->next)
        {
            //printf("%d %d\n",p->data,p->next->data);
            if(p->next->data == m)
            {
                if(p->next->next == NULL)
                {
                    p->next = NULL;break;
                }
                else
                    p->next = p->next->next;
            }
            else
                p = p->next;
        }
    }
//    p->next = NULL;
//    L = L->next;
    return L;
}
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
