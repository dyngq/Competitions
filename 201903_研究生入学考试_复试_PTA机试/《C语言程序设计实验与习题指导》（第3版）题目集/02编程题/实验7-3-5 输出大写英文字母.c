#include <stdio.h>

int main()
{
    char s[82];
    gets(s);
    int n = strlen(s);
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        for(int i = 0; i < n; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                //flag = 1;
                printf("%c",s[i] + 32);
            }
            else
                printf("%c",s[i]);
        }
    }

    else if(flag == 0)
        printf("Not Found");
}
