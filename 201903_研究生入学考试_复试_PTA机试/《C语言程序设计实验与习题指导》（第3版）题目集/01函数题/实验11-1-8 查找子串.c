#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* �����ṩ��ϸ�ڲ��� */

int main()
{
    char s[MAXS], t[MAXS], *pos;

    //ReadString(s);
    //ReadString(t);
    gets(s);
    gets(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
#include <string.h>
char *search( char *s, char *t )
{
    return strstr(s,t);
}
