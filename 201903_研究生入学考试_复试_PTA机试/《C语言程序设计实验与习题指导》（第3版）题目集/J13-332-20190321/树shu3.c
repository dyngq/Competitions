#include<stdio.h>
#include<stdlib.h>

typedef char ElementType;
typedef struct treenode
{
    ElementType data;
    struct treenode *leftchild;
    struct treenode *rightchild;
} TreeNode;

/*使用先序遍历创建二叉树*/
TreeNode *create_bitree()
{
    ElementType ch;
    TreeNode *T;

    scanf("%c",&ch);    //这样调用scanf时，树的结点一次全部输入，如果要一次一个的输入，在%c前加个空格
    if(ch!='#')
    {
        T=(TreeNode*)malloc(sizeof(TreeNode));
        T->data=ch;
        T->leftchild=create_bitree();
        T->rightchild=create_bitree();
    }
    else
    {
        T=NULL;
    }
    return T;
}

/*先序遍历*/
void pre_order_traversal(TreeNode *T)
{
    ElementType data;
    if(T!=NULL)
    {
        data=T->data;
        printf("%c ",data);
        pre_order_traversal(T->leftchild);
        pre_order_traversal(T->rightchild);
    }
}
int main()
{
    TreeNode *T = create_bitree();
    pre_order_traversal(T);
}
