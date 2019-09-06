#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100000];
    gets(s);
    int len = strlen(s);
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i]==' ')
        {
            printf("%d ",count);
            count = 0;
        }
        else if(s[i]=='.')
            break;
        else
            count++;
    }
    printf("%d",count);
    return 0;
}
