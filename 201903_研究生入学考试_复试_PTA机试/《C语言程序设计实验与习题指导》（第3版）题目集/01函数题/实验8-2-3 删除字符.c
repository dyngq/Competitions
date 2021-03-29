#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
//void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    gets(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* 你的代码将被嵌在这里 */
#include <string.h>
void delchar( char *str, char c )
{
    int n = strlen(str);
    //int t = 0;
    for(int i = 0; i < n;)
    {
        if(str[i] == c)
        {
            for(int j = i; j < n; j++)
            {
                str[j] = str[j+1];
                //t++;
            }
        }
        else
            i++;
    }
}
