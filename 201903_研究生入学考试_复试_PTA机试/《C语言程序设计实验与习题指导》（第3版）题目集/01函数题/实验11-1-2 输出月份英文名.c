#include <stdio.h>

char *getmonth( int n );

int main()
{
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if ( s==NULL ) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
char s[20] = {NULL};
char *getmonth( int n )
{
    switch(n)
    {
        case 1: strcpy(s, "January");break;
        case 2: strcpy(s, "February");break;
        case 3: strcpy(s, "March");break;
        case 4: strcpy(s, "April");break;
        case 5: strcpy(s, "May");break;
        case 6: strcpy(s, "June");break;
        case 7: strcpy(s, "July");break;
        case 8: strcpy(s, "August");break;
        case 9: strcpy(s, "September");break;
        case 10: strcpy(s, "October");break;
        case 11: strcpy(s, "November");break;
        case 12: strcpy(s, "December");break;
        default: return NULL;
    }
    return s;
}
