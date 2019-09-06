#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    n = 2*n;
    //printf("%d\n",n);
    char a[n+1][n+1];
    int b[n+1][n+1];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            getchar();
            scanf("%c",&a[i][j]);
        }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            b[i][j] = -1;
    int t;
    scanf("%d",&t);
    int x,y,p,q;
    int sum = 0;
    int f = 0;
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d",&x,&y,&p,&q);
        if(a[x][y] == a[p][q] && a[x][y]!= '*')
        {
            //f = 0;
            sum++;
            if(sum == n*n/2)
            {
                printf("Congratulations!");
                return 0;
            }
            else
            {
                a[x][y] = '*';
                a[p][q] = '*';
                for(int i = 1; i <= n; i++)
                {
                    for(int j = 1; j < n; j++)
                        printf("%c ",a[i][j]);
                    printf("%c\n",a[i][n]);
                }
            }
        }
        else
        {
            f++;
            if(f==3)
            {
                printf("Uh-oh\n");
                printf("Game Over");
                return 0;
            }
            else
                printf("Uh-oh\n");
        }
    }




    return 0;
}
