#include <stdio.h>
#define MAXS 20

void f( char *p );
void ReadString( char *s ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char s[MAXS];

    gets(s);
    f(s);
    printf("%s\n", s);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void f( char *p )
{
    char s[MAXS];
    strcpy(s,p);
    int n = strlen(p);
    for(int i = n-1,j=0; i>=0; i--,j++)
    {
        p[i] = s[j];
    }
}
