#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode List;

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode List;

//List Read(); /* 细节在此不表 */

int Length( List L );

int main()
{
    List L = {1,2,5,4,-1};,
    printf("%d\n", Length(L));
    return 0;
}

int length( List L )
{
    if(L == NULL)
        return 0;
    else
        return 1 + length(L->Next);
}
