#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
//void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

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

/* ��Ĵ��뽫��Ƕ������ */
#include <string.h>
void strmcpy( char *t, int m, char *s )
{
    int n = strlen(t);
    if(m>n)
        return NULL;
    for(int i = m-1,j = 0; i <= n; i++,j++)
        s[j] = t[i];

}
