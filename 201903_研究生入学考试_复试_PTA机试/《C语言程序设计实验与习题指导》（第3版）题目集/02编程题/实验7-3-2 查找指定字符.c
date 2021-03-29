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
    int pos = (int)strchr(s,c)-(int)strchr(s,s[0])+1;
    if(pos>=1 && pos <= n+1)
        printf("index = %d",pos);
    else
        printf("Not Found");
}
