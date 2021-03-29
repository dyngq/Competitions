#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count = 0;
    char c;
    int flag = 0;
    int ori = 0;
    int orid = 0;
    while(1)
    {
        scanf("%c",&c);
        if(c == '.'&&ori == 0)
            orid = 1;
        if(c == '.')
            break;
        if(c != ' ')
            ori = 1;
        if(c == ' '&&ori == 0)
            continue;

        else if(c == ' ' && flag == 0)
        {
            printf("%d ",count);
            count= 0;
            flag = 1;
        }
        else if(c == ' ' && flag == 1)
        {
            continue;
        }
        else if(c != ' ')
        {
            count++;
            flag = 0;
        }

        //printf(" %c",c);

    }
    if(orid == 1)
        ;
    else
        printf("%d",count);
    return 0;
}
/**  It's great to see  you   here  .  **/
