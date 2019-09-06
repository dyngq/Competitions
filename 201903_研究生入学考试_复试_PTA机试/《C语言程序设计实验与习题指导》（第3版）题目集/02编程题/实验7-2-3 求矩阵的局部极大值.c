#include <stdio.h>

int main()
{
    int m,n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    int f = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 1; i < m-1; i++)
    {
        for(int j = 1; j < n-1; j++)
        {
            if(a[i][j]>a[i+1][j] && a[i][j]>a[i-1][j] && a[i][j]>a[i][j+1] && a[i][j]>a[i][j-1])
            {
                printf("%d %d %d\n",a[i][j],i+1,j+1);
                f = 1;
            }
        }
    }
    if(f == 0)
        printf("None %d %d", m, n);
    return 0;
}
