#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    char s[82];
    scanf("%c",&c);
    getchar();
    gets(s);
    int n = strlen(s);
    //printf("%s\n",s);
    int pos = -1;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == c)
            pos = i;
    }
    if(pos>=0)
        printf("index = %d",pos);
    else
        printf("Not Found");
}
