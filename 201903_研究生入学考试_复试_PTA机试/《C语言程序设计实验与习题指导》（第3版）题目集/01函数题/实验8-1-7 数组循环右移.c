#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
int ArrayShift( int a[], int n, int m )
{
    int s[n];
    for(int i = 0; i < n; i++)
        s[i] = a[i];
    if(n>0)
    {
        if(m%n==0)
            ;
        else
        {
            for(int i = 0,j= m%n; i < n; i++,j=(j+1)%n)
            {
                a[i] = s[j];
            }
        }

    }

}
