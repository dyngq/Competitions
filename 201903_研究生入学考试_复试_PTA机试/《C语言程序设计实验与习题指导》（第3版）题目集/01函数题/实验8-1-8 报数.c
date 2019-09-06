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
        if(i%m==0)
        {
            if(a[i%n]==1)
            {
                printf("%d\n",i);
                a[i%n] = 0;
                out[(i-1)%n] = x;
                x++;
            }
            else
            {
                int t = i+1;
                while(1)
                {
                    if(a[t%n]==1)
                    {
                        printf("2%d\n",t);
                        a[t%n] = 0;
                        out[(t-1)%n] = x;
                        x++;
                        break;
                    }
                    else
                        t++;
                }
            }
        }
        i++;
        if(x==n+1)
            break;
    }
}
