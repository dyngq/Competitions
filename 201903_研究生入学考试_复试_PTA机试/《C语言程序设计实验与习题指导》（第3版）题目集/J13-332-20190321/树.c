#include <stdio.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree CreatBinTree()
{
    BinTree BT = (BinTree )malloc(sizeof(BinTree));
    BinTree s = BT;
    int n;
    scanf("%d",&n);
    //printf("%d\n",n);
    if(n==0)
        return NULL;

    char c;
    int a[n];
    for(int i = 0; i < n+2;i++)
        a[i] = 0;

    int x,y;
    scanf("%c",&c);
    getchar();
    scanf("%d%d",&x,&y);
    //printf("%d %d\n",x,y);

    s->Data = c;

    if(x==1)
        a[1] = 1;
    if(y==2)
        a[2] = 1;
    int k = 0;
    for(int i = 1; i <= n;i++)
    {
        //printf("err1\n");
        //printf("%d\n",a[i]);
        if(a[i]==1)
        {

            scanf("%c",&c);
            getchar();
            scanf("%d%d",&x,&y);
            //printf("err2\n");
            if(x!='-')
                a[x] = 1;
            if(y!='-')
                a[y] = 1;


            if(i%2==1)
            {
                BinTree p = (BinTree )malloc(sizeof(BinTree));
                p->Data = c;
                s->Left = p;
            }

            else if(i%2==0)
            {
                BinTree p = (BinTree )malloc(sizeof(BinTree));
                p->Data = c;
                s->Right = p;
                for(int z = k+1; z < n+1; z++)
                {
                    if(a[z]==1)
                    {
                        k = z;
                        //;//s = k½áµã
                        switch(z)
                        {
                            case 1: s = s->Left;break;
                            case 2: s = s->Right;break;
                            case 3: s = s->Left->Left;break;
                            case 4: s = s->Left->Right;break;
                            case 5: s = s->Right->Left;break;
                            case 6: s = s->Right->Right;break;
                            case 7: s = s->Left->Left->Left;break;
                            case 8: s = s->Left->Left->Right;break;
                            case 9: s = s->Left->Right->Left;break;
                           case 10: s = s->Left->Right->Right;break;
                        }
                        break;
                    }
                }
            }

        }
    }
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
