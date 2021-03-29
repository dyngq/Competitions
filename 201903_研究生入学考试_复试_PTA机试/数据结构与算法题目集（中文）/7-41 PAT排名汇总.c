#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXN 30000

struct pta
{
    char s[20];
    int mark;
    int order_f;
    int k;
    int order_k;
}p[30000];

int main()
{
    //struct pta p[30000];
    int N;
    int num = 1;
    scanf("%d",&N);
    for(int i = 1; i <= N; i++)
    {
        int kk;
        scanf("%d",&kk);
        for(int j = 1;j<=kk;j++)
        {
            //char *ss;
            //ss = (char*)malloc(sizeof(char));
            int markk;
            scanf("%s",p[num].s);//不需要 &ss  , 不需要&&&&&&&&&&&&&&&&&&
            scanf("%d",&p[num].mark);
            p[num].k=i;
            num++;
            //p[i].s = (char*)malloc(sizeof(char)+20);
            //p[i].s = ss;
            //p[i].mark = markk;
        }
        for(int j = 1;j<=kk;j++)
        {
            ;
        }

    }
    //printf("%s %d %d \n",p[1].s,p[1].mark,p[1].k);
    for(int i = 1; i < num; i++)
    {
        printf("%s %d %d \n",p[i].s,p[i].mark,p[i].k);
    }
    return 0;
}


/**

**/
