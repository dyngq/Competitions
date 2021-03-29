#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[109];
    gets(s);
    int n;
    scanf("%d",&n);
    n = n%strlen(s);
    for(int i = n; i < strlen(s); i++)
    {
        printf("%c",s[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
