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
    for(int i = 1; i < (n-1)/3*3 + 1; i++)
    {
        if(i%3 == 0)
        {
            printf("%d\n",a[i] - a[i-1]);
        }
        else
        {
            printf("%d ",a[i] - a[i-1]);
        }
    }
    if((n-1)%3 == 1)
    {
        printf("%d\n",a[n-1] - a[n-2]);
    }
    if((n-1)%3 == 2)
    {
        printf("%d ",a[n-2] - a[n-3]);
        printf("%d\n",a[n-1] - a[n-2]);
    }
}
