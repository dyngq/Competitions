#include <stdio.h>
/** ����һ������ ��¼��ǰ���� **/
/** a�ǻ���  k�ǵ�ǰλ�� **/
int c;
int x = 0;
void splitint(int n, int a[], int k)
{
    for(int j = 1; j < k; j++)
    {
        if(a[j]<a[j-1])
            return;
    }
    if(n<=0)//k==n
    {

        x++;
        printf("%d=%d",c,a[0]);
        for(int j = 1; j < k; j++)
        {
            printf("+%d",a[j]);
        }
        if(x%4==0&&x!=0)
            printf("\n");
        else if(a[0]<c)
            printf(";");
        return;
    }

    for(int i = 1; i <= n; i++)
    {
        a[k] = i;
        splitint(n-i,a,k+1);
    }
}


int main()
{
    int n;
    int a[1000];
    scanf("%d",&n);
    c = n;
    splitint(n,a,0);

}
10 10 10 15 15 20 20
