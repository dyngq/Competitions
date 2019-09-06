#include <stdio.h>

int main()
{
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    if(a>12)
    {
        printf("%d:%d PM",a-12,b);
    }
    else if(a<12)
    {
        printf("%d:%d AM",a,b);
    }
    else
    {
        printf("12:%d PM",b);
    }
    return 0;
}

