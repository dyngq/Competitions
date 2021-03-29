#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(i+j!=n+1)
                sum = sum + a[i][j];
        }
    }
    printf("%d",sum);
}
