#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int max = -100000000;
    int num = 0;
    for(int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        if(t > max)
        {
            max = t;
            num = i;
        }
    }
    printf("%d %d",max, num);

}
