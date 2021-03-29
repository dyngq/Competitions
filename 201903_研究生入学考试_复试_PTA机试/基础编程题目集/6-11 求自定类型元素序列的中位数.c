#include <stdio.h>

#define MAXN 10
float Median(float A[],int N)
{
    int x = 0;
    float a;
    int i,j;
    for(i = 0;i<N;i++)
    {
        x = 0;
        for(j = 0;j<N;j++)
        {
            if(A[i]>=A[j])
                x++;
            if(x>N/2+1||(j>N/2+1&&x<1))
                break;
        }
        if(x==N/2+1)
        {
            a = A[i];break;
        }
    }
    return a;
}

int main()
{

    float A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}
/*
ElementType Median(ElementType A[],int N)
{
    int x = 0;
    ElementType  a;
    for(int i = 0;i<N;i++)
    {
        x = 0;
        for(int j = 0;j<N;j++)
        {
            if(A[i]>=A[j])
                x++;
        }
        if(x==N/2)
            a = A[i];
    }
    return a;
}
*/
