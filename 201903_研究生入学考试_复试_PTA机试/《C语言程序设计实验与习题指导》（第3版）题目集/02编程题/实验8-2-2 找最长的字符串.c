#include <stdio.h>
#include <string.h>

int main()
{
    char smax[81],temp[81];
    int n;
    scanf("%d",&n);
    int len, max=-1;
    for(int i = 0; i < n; i++)
    {
        scanf("%s",temp);
        len = strlen(temp);
        if(len > max)
        {
            max = len;
            strcpy(smax, temp);
        }
    }
    printf("The longest is: %s\n",smax);
}
