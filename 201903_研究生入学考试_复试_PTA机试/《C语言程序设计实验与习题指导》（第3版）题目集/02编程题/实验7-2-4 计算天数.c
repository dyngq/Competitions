#include <stdio.h>

int run(int n)
{
    if( (n%4==0 && n%100!=0) || n%400==0 )
        return 1;
    else
        return 0;
}

int main()
{
    int y,m,d;
    scanf("%d",&y);
    getchar();
    scanf("%d",&m);
    getchar();
    scanf("%d",&d);
    int sum = 0;
    if(run(y) == 1 && m > 1)
        sum = sum + 1;
    int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i = 1; i < m; i++)
    {
        sum = sum + a[i];
    }
    sum = sum + d;
    printf("%d",sum);
}
//2000/01/02
