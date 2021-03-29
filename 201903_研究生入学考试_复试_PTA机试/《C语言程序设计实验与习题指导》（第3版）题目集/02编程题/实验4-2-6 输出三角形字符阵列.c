#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char s[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            printf("%c ",s[k]);
            k++;
        }
        printf("\n");
    }
}
