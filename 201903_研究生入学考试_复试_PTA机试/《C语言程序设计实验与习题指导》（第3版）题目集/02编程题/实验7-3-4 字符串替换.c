#include <stdio.h>
#include <string.h>
int main()
{
    char s[82];
    gets(s);
    int n = strlen(s);
    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c",155-s[i]);
        }
        else
            printf("%c",s[i]);
    }
}
