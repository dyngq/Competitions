#include <bits/stdc++.h>

using namespace std;

int f( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", f(n));

    return 0;
}

int f(int n)
{
    if(n == 1)
        return 1;
    if(n == 0)
        return 0;
    else
        return f(n-2) + f(n-1);
}
