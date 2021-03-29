#include <stdio.h>
#include <string.h>

typedef struct
{
    char s[11];
}PX;

int main()
{
    PX x[21];
    int i = 0;
    char temp[11];
    for(i = 0; ;i++)
    {
        scanf("%s", temp);
        //printf("%s\n", temp);
        if(strcmp(temp,"#")==0)
            break;
        else
        {
            strcpy(x[i].s,temp);
            //printf("%s\n", x[i].s);
        }
    }

    for(int p = 0; p < i; p++)
    {
        for(int q = 0; q < i-1; q++)
        {
            if(strcmp(x[q].s,x[q+1].s) > 0)
            {
                strcpy(temp, x[q].s);
                strcpy(x[q].s, x[q+1].s);
                strcpy(x[q+1].s, temp);
            }
        }
    }

    for(int j = 0; j < i; j++)
    {
        printf("%s ",x[j].s);
    }
    return 0;
}
