struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *t;
    t = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *p,*q;
    p = list1;
    q = list2;
    while(p&&q)
    {
        if(p->data<q->data)
        {
            t->next = p;
            p = p->next;
            t = t->next;
        }
        else if(p->data>q->data)
        {
            t->next = q;
            q = q->next;
            t = t->next;
        }
        else if(p->data==q->data)
        {
            t->next = p;
            p = p->next;
            q = q->next;
            t = t->next;
        }
    }
    while(p)
    {
        t->next = p;
        p = p->next;
        t = t->next;
    }
    while(q)
    {
        t->next = q;
        q = q->next;
        t = t->next;
    }
    return list1;
}
