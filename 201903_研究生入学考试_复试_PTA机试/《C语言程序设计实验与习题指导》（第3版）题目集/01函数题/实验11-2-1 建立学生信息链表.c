#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};
struct stud_node *head, *tail;

void input();

int main()
{
    struct stud_node *p;

    head = tail = NULL;
    input();
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

/* 你的代码将被嵌在这里 */
void input()
{
    int n;
    //head -> next = tail;
    head = (struct stud_node *)malloc(sizeof(struct stud_node));
    tail = head;
    //head = tail;
    while(1)
    {
        scanf("%d",&n);
        if(n == 0)
        {
            head = head->next;
            tail->next = NULL;
            return;
        }
        //printf("1\n");
        struct stud_node *s;
        s = (struct stud_node *)malloc(sizeof(struct stud_node));
        s->num = n;
        scanf("%s %d",s->name,&s->score);
        //printf("2\n");
        tail -> next = s;
        tail = s;
        tail -> next = NULL;
        //printf("3\n");
    }

}









