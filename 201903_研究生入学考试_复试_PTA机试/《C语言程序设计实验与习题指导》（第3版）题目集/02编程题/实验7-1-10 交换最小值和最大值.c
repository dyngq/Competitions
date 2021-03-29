#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max = -10000000;
    int min = 10000000;
    int maxn,minn;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            minn = i;
        }
    }
    int t;
    t = a[0];
    a[0] = a[minn];
    a[minn] = t;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            maxn = i;
        }
    }

    t = a[n-1];
    a[n-1] = a[maxn];
    a[maxn] = t;
    for(int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
