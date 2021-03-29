#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];
    //printf("%d %")
    gets(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
#include <string.h>
void StringCount( char *s )
{
    int A = 0,a = 0,space = 0,num = 0,el = 0;
    int n = strlen(s);
    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            A++;
        else if(s[i] >= 'a' && s[i] <= 'z')
            a++;
        else if(s[i] ==' ')
            space++;
        else if(s[i] >= '0' && s[i] <= '9')
            num++;
        else
            el++;
    }
    printf("%d %d %d %d %d",A,a,space,num,el);
}
