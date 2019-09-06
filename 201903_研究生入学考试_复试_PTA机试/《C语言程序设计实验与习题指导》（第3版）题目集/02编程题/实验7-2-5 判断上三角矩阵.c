#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    for(int i = 0; i < x; i++)
    {
        int n;
        scanf("%d",&n);
        int a[n+1][n+1];
        int f = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                scanf("%d",&a[i][j]);
                if(i > 1 && j < i && a[i][j] != 0)
                {
                    f = 1;
                    //printf("%d\n",a[i][j]);
                }


            }
        }
        if(f == 0)
            printf("YES\n");
        if(f == 1)
            printf("NO\n");
    }
    return 0;
}
