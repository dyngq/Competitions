#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum = 0;
    int i,j;
    for(i = a, j = 1; i <= b; i++, j++)
    {
        printf("% 5d",i);
        if(j%5 == 0)
            printf("\n");
        sum = sum + i;
    }
    //printf("%d\n",j);
    if(j%5==1)
        printf("Sum = %d",sum);
    else
        printf("\nSum = %d",sum);
    return 0;
}
