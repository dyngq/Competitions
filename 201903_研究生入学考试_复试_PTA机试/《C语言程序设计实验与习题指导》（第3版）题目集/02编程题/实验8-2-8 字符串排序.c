#include <stdio.h>
#include <string.h>

int main()
{
    char *s[5];
    char temp[80];
    for(int i = 0; i < 5; i++)
    {
        s[i] = (char *)malloc(sizeof(char)*80);
        scanf("%s",s[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(strcmp(s[j],s[j+1]) > 0)
            {
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);
            }
        }
    }
    printf("After sorted:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%s\n",s[i]);
    }
}
