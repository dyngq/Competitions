#include <bits/stdc++.h>
#include <cstdio>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct ListNode {
    char code[8];
    struct ListNode *next;
};
struct ListNode *createlist(); /*裁判实现，细节不表*/
int countcs( struct ListNode *head );

int main()
{
    struct ListNode  *head;
    int i;
    char a[][8]={"021we","002qwe","00023qw","4adss","5qwe","6qwe","7fgs","8asd"};
    head=(struct ListNode *)malloc(sizeof(struct ListNode));
    ListNode *p,*s;
    head->next=NULL;
    s=head;
    //依次将数组a中的5个元素插入单链表中
    for(i=0;i<5;i++)
    {
        p=(struct ListNode *)malloc(sizeof(struct ListNode));
        p->code=a[i][];
        p->next=s->next;
        s->next=p;
        s=s->next;
    }
    p=head->next;
    while(p){
        printf("%s ",p->code);
        p=p->next;
    }

    printf("%d\n", countcs(head));

    return 0;
}

// 你的代砰Ǩ«嵌在这里 */
int count_ = 0;
int countcs( struct ListNode *head )
{
    if(head == NULL)
        return 0;
    else
    {
        if(head->code[1]=='0' && head->code[2]=='2')
            count_++;
        else
            ;
        countcs(head->next);
    }
    return count_;
}
