#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1][n+1];
    int b[n+1][n+1];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            b[i][j] = -1;
    int i = 1;
    int j = 1;
    int c = 0;
    while(i <= n*n)
    {
        j = 1+c;
        //printf("e0\n");
        while(j<n-c && b[c+1][j] == -1)
        {
            //printf("e1\n");
            a[c+1][j] = i;
            b[c+1][j] = 4;
            i++;
            j++;
        }
        j = 1+c;
        while(j<n-c && b[j][n-c] == -1)
        {
            //printf("e2\n");
            a[j][n-c] = i;
            b[j][n-c] = 4;
            i++;
            j++;

        }
        j = n-c;
        while(j>1+c && b[n-c][j] == -1)
        {
            //printf("e3\n");
            a[n-c][j] = i;
            b[n-c][j] = 4;
            i++;
            j--;
        }
        j = n-c;
        while(j>1+c && b[j][c+1] == -1)
        {
            //printf("e4\n");
            a[j][c+1] = i;
            b[j][c+1] = 4;
            i++;
            j--;
        }
        c++;
        //printf("c:%d\n",c);
        if(i == n*n)
            break;
    }
    if(n%2 == 1)
        a[n/2+1][n/2+1] = n*n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }

    return 0;
}
