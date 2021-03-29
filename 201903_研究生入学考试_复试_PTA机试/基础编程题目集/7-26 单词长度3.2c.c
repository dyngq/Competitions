#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count = 0;
    int coun[100];
    char c;
    int flag = 0;
    int ori = 0;
    int orid = 0;
    int i = 0;
    while(1)
    {
        scanf("%c",&c);
        if(c == '.'&& ori == 0)
        {
            orid = 1;break;
        }
        else if(c == '.')
            break;
        if(c != ' ')
            ori = 1;
        if(c == ' '&&ori == 0)
            continue;
        else if(c == ' ' && flag == 0)
        {
            coun[i] = count;
            //printf("%d ",count);
            count= 0;
            flag = 1;
            i++;
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
    {
        coun[i] = count;
        int k = 0;
        for(k;coun[k]<100000&&coun[k]>0;k++)
        {
            ;
        }
        for(int j = 0; j < k-1; j++)
        {
            printf("%d ",coun[j]);
        }
        printf("%d",coun[k-1]);
        //printf("\n%d",k);
    }


    return 0;
}
/**     It's   great                                       to     see     you      here      .  **/
/**   It's great to see  you   here.  **/
