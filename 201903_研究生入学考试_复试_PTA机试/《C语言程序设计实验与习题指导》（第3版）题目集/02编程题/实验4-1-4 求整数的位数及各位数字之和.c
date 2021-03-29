#include <stdio.h>
#include <string.h>
int main()
{
    char s[82];
    //printf("%d\n",'0');//48
    scanf("%s",s);
    int n = strlen(s);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + (int)s[i] - 48;
    }
    printf("%d %d",n,sum);
}
