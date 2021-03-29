#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x=1,y=1;
    int num=0;
    int a[1000];
    int b[1000];
    int flag  = 0;
    for(x = 1; x*x < n; x++ )
    {
        for(y = x; y*y < n; y++)
            if(x*x+y*y==n)
            {
                a[num] = x;
                b[num] = y;
                num ++;
                printf("%d %d\n",x,y);
                flag = 1;
            }
    }
    if(flag == 0)
        printf("No Solution");


    return 0;
}

/**


x2 + 2xy + y2 = N + 2xy = (x+y)2


**/
