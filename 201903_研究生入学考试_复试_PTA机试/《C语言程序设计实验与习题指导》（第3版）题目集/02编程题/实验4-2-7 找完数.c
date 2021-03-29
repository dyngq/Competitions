#include <stdio.h>
#include <math.h>
int ww(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n%i == 0)
            sum = sum + i;
    }
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    int f = 0;
    for(int i = a; i<= b; i++)
    {
        if( i == ww(i))
        {
            f = 1;
            printf("%d = 1",i);
            for(int j = 2; j < i; j++)
            {
                if(i%j == 0)
                    printf(" + %d",j);
            }
            printf("\n");
        }
    }
    if(f==0)
        printf("None");

}
