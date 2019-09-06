#include <stdio.h>

typedef struct
{
    char id[8];
    char name[15];
    double score;
}SDU;

int main()
{
    int n;
    scanf("%d",&n);
    SDU st[n];

    double ave = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %lf",st[i].id, st[i].name, &st[i].score);
        ave = ave + st[i].score/n;
    }
    printf("%.2lf\n",ave);
    for(int i = 0; i < n; i++)
    {
        if(st[i].score < ave)
            printf("%s %s\n",st[i].name, st[i].id);
    }
}
