List Reverse( List L )
{
    if(L == NULL)
        return L;
    else if(L->Next == NULL)
    {
        return L;
    }
    else if(L->Next->Next == NULL)
    {
        List s,t;/****/
        s = L;
        t = L->Next;
        L->Next = NULL;
        L = t;
        L->Next = s;
        return L;
    }
    else
    {
        List p,q;
        p = L;
        q = L->Next;
        L->Next = NULL;
        L = q;
        q = L->Next;
        while(L->Next)
        {
            L->Next = p;
            p = L;
            L = q;
            q = L->Next;
        }
        L->Next = p;
        return L;
    }


}
