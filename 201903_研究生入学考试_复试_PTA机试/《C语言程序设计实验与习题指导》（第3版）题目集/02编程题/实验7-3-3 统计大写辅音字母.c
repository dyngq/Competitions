#include <stdio.h>
#include <string.h>
int main()
{
    char s[82];
    gets(s);
    int n = strlen(s);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] >= 'A' && s[i] <= 'Z')
        {
            sum++;
        }
    }
    printf("%d",sum);
}
