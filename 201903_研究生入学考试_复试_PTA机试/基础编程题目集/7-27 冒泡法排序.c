#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d",a[n-1]);
    return 0;
}
