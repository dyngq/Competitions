#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int a;
    scanf("%d%lld",&a,&n);
    int i;
    long long int sum = 0;
    for(i = 0; i < n; i++)
    {

        //printf("%lld ",i);
        //printf("%lld ",n);
        double p ;
        p = pow(10,i);
        //printf("%f\n",p);
        sum += a* p *(n-i);
    }
    printf("%lld",sum);
}
