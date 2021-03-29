#include <stdio.h>

int main()
{
    int a[21], b[21];
    int na;
    scanf("%d",&na);
    int s[40];
    int k = 0;
    for(int i = 0; i < na; i++)
    {
        scanf("%d", &a[i]);
    }
    int nb;
    scanf("%d",&nb);
    for(int i = 0; i < nb; i++)
    {
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < na; i++)
    {
        int f = 0;
        for(int j = 0; j < nb; j++)
        {
            if(a[i] == b[j])
            {
                f++;
            }
        }
        if(f == 0)
        {
            s[k] = a[i];
            k++;
        }
    }
    for(int i = 0; i < nb; i++)
    {
        int f = 0;
        for(int j = 0; j < na; j++)
        {
            if(b[i] == a[j])
            {
                f++;
            }
        }
        if(f == 0)
        {
            s[k] = b[i];
            k++;
        }
    }
    int fi[40];
    int p = 0;
    for(int i = 0; i < k; i++)
    {
        int f = 0;
        for(int j = 0; j < i; j++)
        {
            if(s[i] == s[j])
                f = 1;
            //printf("%d %d\n",s[i],s[j]);
        }
        //printf("\n");
//        if(f == 0 && k == 1)
//        {
//            printf("%d",s[0]);
//        }
        if(f == 0)
        {
            fi[p] = s[i];
            p++;
        }

    }
    for(int i = 0; i < p; i++)
    {
        if(i < p-1)
            printf("%d ",fi[i]);
        if(i == p-1)
            printf("%d",fi[i]);
    }
}
