#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char s[15];
}DY;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    DY dy[109];
    char temp[15];
    for(int i = 0; i < n; i++)
    {
        scanf("%s",dy[i].s);
    }

    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(strcmp(dy[j].s,dy[j+1].s)>0)
            {
                strcpy(temp, dy[j].s);
                strcpy(dy[j].s, dy[j+1].s);
                strcpy(dy[j+1].s, temp);
            }
//            for(int p = 0; p < n; p++)
//            {
//                printf("%s ",dy[p].s);
//            }
//            printf("\n");
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%s\n",dy[i].s);
    }
    return 0;
}
