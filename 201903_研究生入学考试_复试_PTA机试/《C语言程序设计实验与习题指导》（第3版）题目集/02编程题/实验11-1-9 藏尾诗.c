#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[100], d[100];
    scanf("%s %s %s %s",a,b,c,d);
    //printf("%s\n%s\n%s\n%s\n",a,b,c,d);
    int aa = strlen(a);
    int bb = strlen(b);
    int cc = strlen(c);
    int dd = strlen(d);
    printf("%c%c",a[aa-2],a[aa-1]);
    printf("%c%c",b[bb-2],b[bb-1]);
    printf("%c%c",c[cc-2],c[cc-1]);
    printf("%c%c",d[dd-2],d[dd-1]);
}
