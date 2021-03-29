#include <stdio.h>

int main()
{
    int outcome = 0;
    scanf("%d",&outcome);
    int a;
    char c;
    while(1)
    {
        scanf("%c", &c);
        if(c == '=')
            break;

        scanf("%d", &a);
        if(c == '+')
        {
            outcome += a;
            //printf("+ %d\n",outcome);
        }
        else if(c == '-')
        {
            outcome -= a;
            //printf("- %d\n",outcome);
        }

        else if(c == '*')
        {
            outcome *= a;
            //printf("* %d\n",outcome);
        }

        else if(c == '/' && a != 0)
        {
            outcome /= a;
            //printf("/ %d\n",outcome);
        }

        else
        {
            printf("ERROR");
            return 0;
        }
    }
    printf("%d",outcome);
}
