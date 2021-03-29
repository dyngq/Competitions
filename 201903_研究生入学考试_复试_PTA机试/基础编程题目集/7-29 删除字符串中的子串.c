#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s1[89];
char s2[89];

void strdel(int pos,int l1, int l2)
{
    for(int i = pos; i < l1; i++)
    {
        //printf("%c",s1[i]);
        s1[i] = s1[i+l2];
    }
    //printf("%s\n",s1);
    //printf("%d\n",l1 - strlen(strstr(s1,s2)));
}

int main()
{

    gets(s1);
    gets(s2);
    int l1 = strlen(s1);
    int l2 = strlen(s2);
//    printf("%d\n",strcmp(s1,strstr(s1,s2)));
//    if(strstr(s1,s2)==NULL)
//        printf("0\n");
    while(1)
    {
        //printf("%d\n",strlen(strstr(s1,s2)));
        if(strstr(s1,s2) != NULL)
        {
            //printf("%d\n",l1 - strlen(strstr(s1,s2)));
            strdel(l1 - strlen(strstr(s1,s2)),l1,l2);
            l1 = l1 - l2;
        }
        else
        {
            //printf("while_break\n");
            break;
        }
    }
    printf("%s",s1);
    return 0;
}
