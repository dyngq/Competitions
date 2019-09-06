#include <stdio.h>

int main()
{
    int sum = 0;
    char s[30];
    while(scanf("%s",s) != EOF)
    {
        sum++;
    }
    printf("%d",sum);
}
