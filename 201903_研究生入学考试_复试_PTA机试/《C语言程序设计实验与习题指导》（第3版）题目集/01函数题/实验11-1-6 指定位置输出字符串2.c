#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */


#include <string.h>
char *match( char *s, char ch1, char ch2 )
{

    char *p = s;
    int n = strlen(s);
    int flag1 = 0;
    int flag2 = 0;
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == ch1)
        {
            flag1 = 1;
        }
        if(flag1 == 1 && flag2 == 0)
        {
            printf("%c",s[i]);
//            ss[j] = s[i];
//            j++;
        }
        if(s[i] == ch2)
            flag2 = 1;
    }
    printf("\n");
    //printf("1 : %s\n",strchr(s,ch1));
    return strchr(s,ch1);
}
