#include <stdio.h>

#define MAXN 10
float Median(float A[],int N)
{
    int x = 0;
    float a;
    int i,j;
    double temp;
    for(i = 0;i<N/2;i++)
    {
        for(j = 0;j<N-1;j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
//    for(int k = 0; k < N; k++)
//    {
//        printf("%lf ",A[k]);
//    }
//    printf("\n");
//    if(N%2==0)
//        return (A[N/2-1]+A[N/2])/2;
//    else
//        return A[N/2+1];
    return A[N/2];
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
