#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a = (n/1000 + 9)%10;
    int b = (n/100%10 + 9)%10;
    int c = (n/10%10 + 9)%10;
    int d = (n%10 + 9)%10;
    int t = c*1000 + d*100 + a*10 + b;
    printf("The encrypted number is %d%d%d%d",c,d,a,b);
    return 0;
}
