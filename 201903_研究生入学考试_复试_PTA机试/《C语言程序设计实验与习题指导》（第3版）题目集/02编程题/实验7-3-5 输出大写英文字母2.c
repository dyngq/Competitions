#include <stdio.h>

int main()
{
    char s[82];
    gets(s);
    int n = strlen(s);
    int flag = 0;
    int a[26] = {0};
    int t;
    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            flag = 1;
            t = (int)s[i] - 65;
            if(a[t] == 0)
                printf("%c",s[i]);
            a[t] = 1;
        }
    }

    if(flag == 0)
        printf("Not Found");
}
