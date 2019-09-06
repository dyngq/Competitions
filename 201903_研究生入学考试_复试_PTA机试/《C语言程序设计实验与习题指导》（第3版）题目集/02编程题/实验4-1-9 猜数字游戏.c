#include <stdio.h>

int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int s;
    for(int i = 0; i < t; i++)
    {
        scanf("%d",&s);
        if(s<0)
        {
            printf("Game Over");
            return 0;
        }
        else if(s < n)
        {
            printf("Too small\n");
        }
        else if(s > n)
        {
            printf("Too big\n");
        }
        else if(s == n)
        {
            if(i==0)
                printf("Bingo!");
            else if(i<=2)
                printf("Lucky You!");
            else
                printf("Good Guess!");
            return 0;
        }
    }
    printf("Game Over");
}
