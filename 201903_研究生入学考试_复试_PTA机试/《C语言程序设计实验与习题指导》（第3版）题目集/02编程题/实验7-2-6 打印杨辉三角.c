#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    n = n + 1;
    int a[n+2][n+2];
    for(int i = 1; i <= n; i++)
    {
        a[i][1] = 1;
        a[i][i] = 1;
    }
    for(int i = 2; i < n; i++)
    {
        for(int j = 2; j < i; j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for(int i = 1; i < n; i++)
    {
        for(int k = 0; k < n-i-1; k++)
            printf(" ");
        for(int j = 1; j <= i; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**
1
1  1
1  2
1  3
1  4  6
1  5 10
1  6 15 20
1  7 21 35
1  8 28 56 70
1  9 36 84 126





**/
