#include <stdio.h>
#include <string.h>

int main()
{
    char s[82];
    gets(s);
    char c;
    scanf("%c",&c);
    int n = strlen(s);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == c)
            sum++;
    }
    printf("%d",sum);
}
