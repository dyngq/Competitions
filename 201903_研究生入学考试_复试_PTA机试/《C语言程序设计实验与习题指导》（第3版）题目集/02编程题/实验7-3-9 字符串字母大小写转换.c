#include <stdio.h>
#include <string.h>

int main()
{
    //printf("%d %d %d %d",'A','Z','a','z');/** 65 90 97 122 **/
    char s[32];
    gets(s);
    int n = strlen(s) - 1;

    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            printf("%c",s[i]-32);
        else if(s[i] >= 'A' && s[i] <= 'Z')
            printf("%c",s[i]+32);
        else
            printf("%c",s[i]);
    }

}
