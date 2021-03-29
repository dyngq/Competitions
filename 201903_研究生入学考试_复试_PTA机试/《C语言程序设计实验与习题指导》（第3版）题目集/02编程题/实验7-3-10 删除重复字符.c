#include <stdio.h>
#include <string.h>
int main()
{
    char s[82];
    gets(s);
    for(int i = 1; i < 129; i++)
    {
        if(strchr(s,(char)i) != 0)
            printf("%c",(char)i);
//        printf("%d ",strchr(s,(char)i));
//        printf("%c \n",(char)i);
    }
}
