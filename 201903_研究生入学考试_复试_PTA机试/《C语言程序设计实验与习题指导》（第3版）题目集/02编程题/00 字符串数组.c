#include <stdio.h>

int main()
{
    char *s[100];
    for(int i = 0; i < 4; i++)
    {
        s[i] = (char *)malloc(sizeof(char)*10);
        scanf("%s",s[i]);
    }
    for(int i = 0; i < 4; i++)
    {
        //s[i] = (char *)malloc(sizeof(char)*10);
        printf("%s\n",s[i]);
    }
}
