#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode
{
    int data;
    struct ListNode *next;
};
struct ListNode *creatlist(int n)
{
    if(n==0)
        return NULL;
    struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *tail = head;
    for(int i = 1; i <= n; i++)
    {
        struct ListNode *s = (struct ListNode*)malloc(sizeof(struct ListNode));
        s->data = i;
        tail->next = s;
        tail = s;
        tail->next = NULL;
    }
    head = head->next;
    tail->next = head;
    return head;
}
void printlist(struct ListNode *head)
{
    ;
}
void CountOff( int n, int m, int out[] )
{
    struct ListNode *head;
    head = creatlist(n);


    for(int i = 0; i < n-1; i++)
    {
        head = head->next;
    }
    //printf("%d\n",head->data);
    int i = 1;
    int k = 1;
    while(1)
    {
        if(i%m==0)
        {
            out[head->next->data-1] = k;
            k++;
            head->next = head->next->next;

        }
        else
            head = head->next;
        i++;
        if(k==n+1)
            break;
    }






    //printlist(head);
//    printf("\n");
//    for(int i = 0; i < n;i++)
//    {
//        out[i]  = 0;
//    }
}
/**
1 2 3 4 5 6 7 8 9 10 11

**/
