#include <stdio.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

int n;
BinTree creat()
{
    n--;
    BinTree BT;
    //BinTree s = BT;
    char c;
    int x,y;
    scanf("%c",&c);
    getchar();
    scanf("%d%d",&x,&y);



    if(c!='#')
    {
        BT=(BinTree)malloc(sizeof(BinTree));
        BT->Data=c;
        BT->Left=creat();
        BT->Right=creat();
    }
    else
    {
        BT=NULL;
    }

    return BT;
    //return BT;
    //printf("%d %d\n",x,y);



}
BinTree CreatBinTree()
{
    BinTree BT;
    scanf("%d",&n);
    if(n==0)
        return NULL;
    else
        BT = creat();
    return BT;

}
int GetHeight( BinTree BT )
{
    if(BT==NULL)
        return 0;
    else
    {
        int m = 1 + GetHeight(BT->Left);
        int n = 1 + GetHeight(BT->Right);
        if(m>n)
            return m;
        else
            return n;
    }
}




int main()
{
    BinTree BT = CreatBinTree();
    printf("%d\n", GetHeight(BT));
    return 0;
}
