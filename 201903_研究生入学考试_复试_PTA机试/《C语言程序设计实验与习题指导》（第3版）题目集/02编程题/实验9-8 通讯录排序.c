#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    char br[10];
    char tel[22];
}SDU;

int main()
{
    int n;
    scanf("%d",&n);
    SDU st[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%s",st[i].name);
        scanf("%s",st[i].br);
        scanf("%s",st[i].tel);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(strcmp(st[j].br, st[j+1].br)>0)
            {
                SDU temp;
                temp = st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
            }
        }
    }


    for(int i = 0; i < n; i++)
    {
        printf("%s ",st[i].name);
        printf("%s ",st[i].br);
        printf("%s\n",st[i].tel);
    }
    return 0;
}
