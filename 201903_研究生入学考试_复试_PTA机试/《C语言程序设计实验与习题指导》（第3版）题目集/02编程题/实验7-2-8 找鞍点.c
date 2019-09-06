#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        int max = a[i][0];
        int maxn = 0;
        for(int j = 0; j < n; j++)
        {
            b[i][j] = 0;
            if( a[i][j] >= max)
            {
                max = a[i][j];
                maxn = j;
            }

        }
        b[i][maxn] = 1;
        //printf("%d\n",a[i][maxn]);
    }
    int f = 0;
    for(int j = 0; j < n; j++)
    {
        int min = a[0][j];
        int minn = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i][j] <= min)
            {
                min = a[i][j];
                minn = i;
            }
        }
        if(b[minn][j] == 1)
        {
            printf("%d %d",minn,j);
            f = 1;
            break;
        }
    }
    if(f == 0)
        printf("NONE");

    return 0;
}
