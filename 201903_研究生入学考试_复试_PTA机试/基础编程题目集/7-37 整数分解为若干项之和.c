#include <stdio.h>
#include <string.h>

void dfs(int a)
{
    if(a==1)
    {
        return;
    }
    dfs(a-1);
}

int main()
{
    int a;
    scanf("%d",&a);
    return 0;
}
