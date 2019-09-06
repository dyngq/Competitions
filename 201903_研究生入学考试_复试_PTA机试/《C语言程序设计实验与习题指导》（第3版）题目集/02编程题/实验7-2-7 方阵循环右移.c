#include <stdio.h>
#include <math.h>

int main()
{
    int m;
    scanf("%d",&m);
    int n;
    scanf("%d",&n);
    int a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int p;
    //if(m <= n)
        p = n - m % n;
//    else
//        p =
    //printf("%d\n",p);
    for(int i = 0; i < n; i++)
    {
        for(int j = p; j < p+n; j++)
        {
            int pp = j % n;
            printf("%d ",a[i][pp]);
        }
        printf("\n");
    }
    return 0;
}
/**

7 6
1 2 3 4 5 6
4 5 6 4 5 6
7 8 9 7 8 9
7 8 9 7 8 9
7 8 9 7 8 9
7 8 9 7 8 9
**/
