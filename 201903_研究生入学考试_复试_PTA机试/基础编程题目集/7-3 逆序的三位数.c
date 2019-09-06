#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a = n%10;
    int b = n/10%10;
    int c = n/100;
    if(a==0&&b==0)
    {
        printf("%d",c);
    }
    else if(a==0&&b!=0)
    {
        printf("%d%d",b,c);
    }
    else if(a!=0)
    {
        printf("%d%d%d",a,b,c);
    }

    return 0;
}
