#include <stdio.h>

typedef struct
{
    char name[20];
    char date[20];
    char sex[2];
    char ctel[20];
    char tel[20];

}CON;

int main()
{
    int n;
    scanf("%d",&n);
    CON con[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %s %s %s",con[i].name, con[i].date, con[i].sex, con[i].ctel, con[i].tel);
    }
    int snum;
    scanf("%d",&snum);
    for(int i = 0; i < snum; i++)
    {
        int sel;
        scanf("%d",&sel);
        if(sel >= n || sel < 0)   /**忘了sel可能小于0 调试了太久都不行**/
            printf("Not Found\n");
        else
        {
            printf("%s %s %s %s %s\n",con[sel].name, con[sel].ctel, con[sel].tel, con[sel].sex, con[sel].date);
        }
    }
    return 0;
}
/**
15
Chris 1984/03/10 F +86181779452 13707010007
LaoLao 1967/11/30 F 057187951100 +8618618623333
QiaoLin 1980/01/01 M 84172333 10086
Chris1 1984/03/10 F +86181779452 13707010007
LaoLao1 1967/11/30 F 057187951100 +8618618623333
QiaoLin1 1980/01/01 M 84172333 10086
Chris2 1984/03/10 F +86181779452 13707010007
LaoLao2 1967/11/30 F 057187951100 +8618618623333
QiaoLin2 1980/01/01 M 84172333 10086
Chris3 1984/03/10 F +86181779452 13707010007
LaoLao3 1967/11/30 F 057187951100 +8618618623333
QiaoLin3 1980/01/01 M 84172333 10086
Chris4 1984/03/10 F +86181779452 13707010007
LaoLao4 1967/11/30 F 057187951100 +8618618623333
QiaoLin4 1980/01/01 M 84172333 10086





**/
