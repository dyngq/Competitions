#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    char s[4];
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            scanf("%s",s);
            if(s[2] == 'T')
            {
                switch(s[0])
                {
                    case 'A': a[i] = 1;break;
                    case 'B': a[i] = 2;break;
                    case 'C': a[i] = 3;break;
                    case 'D': a[i] = 4;break;
                }
            }
        }
        printf("%d",a[i]);
    }
    return 0;
}
