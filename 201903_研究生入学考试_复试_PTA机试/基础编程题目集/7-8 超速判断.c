#include <stdio.h>

int main()
{
    int s;
    scanf("%d",&s);
    if(s>60)
    {
        printf("Speed: %d - Speeding",s);
    }
    else
        printf("Speed: %d - OK",s);
    return 0;
}

