#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[25];
    int x = 1;
    for(int i = n; i < n+4; i++)
    {
        for(int j = n; j < n+4; j++)
        {
            for(int k = n; k < n+4; k++)
            {
                if(i!=j && i!=k && j!=k)
                {
                    a[x] = i*100 + j*10 + k;
                    x++;
                }
            }
        }
    }
    for(int i = 1; i <= 24; i++)
    {
        if(i%6==0)
            printf("%d\n",a[i]);
        else
            printf("%d ",a[i]);
    }
    return 0;
}

