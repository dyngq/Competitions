#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
    int num;                    /*学号*/
    char name[20];              /*姓名*/
    int score;                  /*成绩*/
    struct stud_node *next;     /*指向下个结点的指针*/
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


void input()
{
    struct stud_node *t;
    t = (struct stud_node *)malloc(sizeof(struct stud_node));

    int number,score;
    char name_[20];
    while(1)
    {
        scanf("%d",&number);
        if(number == 0)
            break;
        scanf("%s",&name_);
        scanf("%d",&score);

        t = (struct stud_node *)malloc(sizeof(struct stud_node));
        t->num = number;
        strcpy(t->name , name_);
        t->score = score;

        if(head == NULL)
        {
            head = t;
            head->next = NULL;
        }
        if(tail != NULL)
        {
            tail->next = t;
        }
        tail = t;
        tail->next = NULL;
    }
}
