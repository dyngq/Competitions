#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
//void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    gets(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
#include <string.h>
void strmcpy( char *t, int m, char *s )
{
    int n = strlen(t);
    if(m>n)
        return NULL;
    for(int i = m-1,j = 0; i <= n; i++,j++)
        s[j] = t[i];

}
