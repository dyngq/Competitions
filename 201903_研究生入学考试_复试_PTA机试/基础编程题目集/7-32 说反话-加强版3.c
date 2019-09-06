#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    char a[510000];
    gets(a);
    //printf("%s",a);
    int low,high;
    high = strlen(a);
    int i = strlen(a)-2;
    //printf("%d\n",high);
    int ii = 0;
    for(ii; ii < i; ii++)
    {
        if(a[ii]!=' ')
            break;
    }
    for(i; i > ii; i--)
    {
        //printf("%c",a[i]);
        if(a[i]==' '&&a[i+1]!=' ')
        {
            for(int j = i+1; j < high; j++)
            {

                if(a[j]!=' ')
                    printf("%c",a[j]);
            }
            high = i;
            printf(" ");
        }

    }
    if(a[0]!=' ')
    {
        for(int j = 0; j < high; j++)
        {
            if(a[j]!=' ')
                printf("%c",a[j]);
        }
    }
    else if(a[0]==' ')
    {
        for(int j = 0; j < high; j++)
        {
            if(a[j]!=' ')
                printf("%c",a[j]);
        }
    }


    return 0;
}
//jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj                                                    kkkkkkkkkkkkkkkkkkkkkkkkkkkkk j j jj j jk k k k k jkjkj kj  kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkjjjjjjjjjjjjj                          jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj kkkkkkkkkkkkkkkkjjjjj                         jjjjjjjjjjjjjjjjjjjj
