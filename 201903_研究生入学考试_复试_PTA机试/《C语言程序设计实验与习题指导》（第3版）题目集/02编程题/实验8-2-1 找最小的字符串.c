#include <stdio.h>
#include <string.h>

int main()
{
    char smin[81],temp[81];
    int n;
    scanf("%d",&n);
    scanf("%s",smin);
    for(int i = 1; i < n; i++)
    {
        scanf("%s",temp);
        if(strcmp(temp,smin)<0)
            strcpy(smin,temp);
    }
    printf("Min is: %s\n",smin);
}
