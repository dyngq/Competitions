#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
//void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    gets(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
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
