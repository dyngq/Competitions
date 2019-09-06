#include <stdio.h>

int main()
{
    int h,m,s;
    int p;
    scanf("%d", &h);
    getchar();
    scanf("%d", &m);
    getchar();
    scanf("%d", &s);
    scanf("%d", &p);

    int nh,nm,ns;

    int carry = 0;

    carry = (s + p) / 60;
    ns = (s + p) % 60;
    //printf("1: %d %d\n",s+p,carry);


    nm =  (m + carry) % 60;
    carry = (m + carry) / 60;
    //printf("2: %d\n",carry);

    nh = (h + carry) % 24;

    printf("%02d:%02d:%02d",nh,nm,ns);

    return 0;
}
// 00:00:00
