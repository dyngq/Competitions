#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int ins;
    scanf("%d",&ins);
    if(ins < a[0])
    {
        printf("%d ",ins);
    }
    for(int i = 0; i < n; i++)
    {
        if(i > 0)
        {
            if(ins < a[i] && ins >= a[i-1])
                printf("%d ",ins);
        }
        printf("%d ",a[i]);
    }
    if(ins > a[n-1])
    {
        printf("%d ",ins);
    }

}
