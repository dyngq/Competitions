#include <stdio.h>
#include <stdlib.h>

typedef enum { false, true } bool;
typedef int ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree BuildTree(); /* �ɲ���ʵ�֣�ϸ�ڲ��� */
bool IsBST ( BinTree T );

int main()
{
    BinTree T;

    T = BuildTree();
    if ( IsBST(T) ) printf("Yes\n");
    else printf("No\n");

    return 0;
}
/* ��Ĵ��뽫��Ƕ������ */
int c = 0;

bool IsBST4(BinTree T)
{
    if(T->Left == NULL && T->Right==NULL)
        return;
    else if(T->Left)
    {
        if(T->Data < T->Left->Data)
        {
            c++;
            return;
        }
        else
            IsBST4(T->Left);
    }
    else if(T->Right)
    {
        if(T->Data > T->Right->Data)
        {
            c++;
            return;
        }
        else
            IsBST4(T->Right);
    }
}
bool IsBST ( BinTree T )
{
    if(T==NULL)
        return 1;
    else
        IsBST4(T);
    if(c>0)
        return 0;
    else
        return 1;
}
