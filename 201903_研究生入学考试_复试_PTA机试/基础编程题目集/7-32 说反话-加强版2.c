#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char a[500];
}FH;

int main()
{
    FH fh[500];
    char t[500];
    int i = 0;
    while(scanf("%s",t)!=EOF)
    {
        strcpy(fh[i].a, t);
        i++;
    }
    for(int j = i-1; j > 0; j--)
    {
        printf("%s ",fh[j].a);
    }
    printf("%s",fh[0].a);
    return 0;
}
