#include <bits/stdc++.h>

using namespace std;

void two(int x, int d[])
{
    d[7] = x%2;
    x = x/2;
    d[6] = x%2;
    x = x/2;
    d[5] = x%2;
    x = x/2;
    d[4] = x%2;
    x = x/2;
    d[3] = x%2;
    x = x/2;
    d[2] = x%2;
    x = x/2;
    d[1] = x%2;
    x = x/2;
    d[0] = x%2;
}

int main()
{
    int n;
    scanf("%d",&n);
    int nn[8] = {0};
    two(n,nn);
    int i = 0;
//    for(i = 0; i < 8; i++)
//    {
//        printf("%d ",nn[i]);
//    }
    int a =0, b = 0;
    a = nn[0]*8 + nn[1]*4 + nn[2]*2 + nn[3]*1;
    b = nn[4]*8 + nn[5]*4 + nn[6]*2 + nn[7]*1 ;
    if(a==0&&b==0)
        printf("0");
    else
        printf("%d%d", a, b);
    return 0;
}
