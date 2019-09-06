#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
//struct
void CountOff( int n, int m, int out[] )
{
    int a[n+1];
    for(int i = 0; i < n;i++)
        a[i] = 1;
    int x = 1;
    int i = 1;
    int k = 1;
    while(1)
    {
        if(x==n+1)
            break;
        if(a[i%n]==1)
        {
            if(k%m==0)
            {
                //printf("%d\n",i);
                a[i%n] = 0;
                out[(i-1)%n] = x;
                x++;
            }
            k++;
        }
        i++;
    }
}
/**
1 2 3 4 5 6 7 8 9 10 11

**/
