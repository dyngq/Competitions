#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PAT
{
    char id[100];
    int score;
}PAT;
typedef struct KS
{
    int k;
    int r;
}KS;
int n;
PAT pat[100];
PAT pat_t[100];
PAT pat_a[100];
PAT pat_b[100];
int t = 0, b = 0, a = 0;
void operation_l(int num)
{
    char kao[30];
    getchar();
    scanf("%s",kao);

    //printf("**%c**",kao);
    if(kao[0]=='T')
    {
        //printf("%d\n",t);
        for(int i = 0; i < t; i++)
        {
            //printf("%d\n",a);
            for(int j = i; j < t; j++)
            {
                if(pat_t[i].score < pat_t[j].score)
                {
                    PAT temp;
                    temp = pat_t[j];
                    pat_t[j] = pat_t[i];
                    pat_t[i] = temp;
                }
            }
        }
        for(int i = 0; i < t; i++)
        {
            //printf("%d\n",a);
            for(int j = i; j < t; j++)
            {
//                int idp1 = ((int)pat_t[i].id[0]-48)*100 + ((int)pat_t[i].id[11]-48)*10 + ((int)pat_t[i].id[12]-48);
//                int idp2 = ((int)pat_t[j].id[10]-48)*100 + ((int)pat_t[j].id[11]-48)*10 + ((int)pat_t[j].id[12]-48);
                //printf("%d %d\n",idp1,idp2);
                if(pat_t[i].score == pat_t[j].score&&strcmp(pat_t[i].id,pat_t[j].id)>0)
                {
                    PAT temp;
                    temp = pat_t[j];
                    pat_t[j] = pat_t[i];
                    pat_t[i] = temp;
                }
            }
        }
        printf("Case %d: 1 T\n", num+1);
        for(int i = 0; i < t; i++)
        {
            printf("%s ",pat_t[i].id);
            printf("%d\n",pat_t[i].score);
        }
    }
    else if(kao[0]=='A')
    {
        //printf("%d\n",t);

        for(int i = 0; i < a; i++)
        {
            //printf("%d\n",a);
            for(int j = i; j < a; j++)
            {
                if(pat_a[i].score < pat_a[j].score)
                {
                    PAT temp;
                    temp = pat_a[j];
                    pat_a[j] = pat_a[i];
                    pat_a[i] = temp;
                }
            }
        }
        for(int i = 0; i < a; i++)
        {
            //printf("%d\n",a);
            for(int j = i; j < a; j++)
            {
//                int idp1 = ((int)pat_a[i].id[10]-48)*100 + ((int)pat_a[i].id[11]-48)*10 + ((int)pat_a[i].id[12]-48);
//                int idp2 = ((int)pat_a[j].id[10]-48)*100 + ((int)pat_a[j].id[11]-48)*10 + ((int)pat_a[j].id[12]-48);
                //printf("%d %d\n",idp1,idp2);
                if(pat_a[i].score == pat_a[j].score&&strcmp(pat_a[i].id,pat_a[j].id)>0)
                {
                    PAT temp;
                    temp = pat_a[j];
                    pat_a[j] = pat_a[i];
                    pat_a[i] = temp;
                }
            }
        }
        printf("Case %d: 1 A\n",num+1);
        for(int i = 0; i < a; i++)
        {
            printf("%s ",pat_a[i].id);
            printf("%d\n",pat_a[i].score);
        }
    }
    else if(kao[0]=='B')
    {
        //printf("%d\n",t);
        for(int i = 0; i < b; i++)
        {
            //printf("%d\n",a);
            for(int j = i; j < b; j++)
            {
                if(pat_b[i].score < pat_b[j].score)
                {
                    PAT temp;
                    temp = pat_b[j];
                    pat_b[j] = pat_b[i];
                    pat_b[i] = temp;
                }
            }
        }
        for(int i = 0; i < b; i++)
        {
            //printf("%d\n",a);
            for(int j = i; j < b; j++)
            {
//                int idp1 = ((int)pat_b[i].id[10]-48)*100 + ((int)pat_b[i].id[11]-48)*10 + ((int)pat_b[i].id[12]-48);
//                int idp2 = ((int)pat_b[j].id[10]-48)*100 + ((int)pat_b[j].id[11]-48)*10 + ((int)pat_b[j].id[12]-48);
                //printf("%d %d\n",idp1,idp2);
                if(pat_b[i].score == pat_b[j].score&&strcmp(pat_b[i].id,pat_b[j].id)>0)
                {
                    PAT temp;
                    temp = pat_b[j];
                    pat_b[j] = pat_b[i];
                    pat_b[i] = temp;
                }
            }
        }
        printf("Case %d: 1 B\n",num+1);
        for(int i = 0; i < b; i++)
        {
            printf("%s ",pat_b[i].id);
            printf("%d\n",pat_b[i].score);
        }
    }
    else
    {
        printf("Case %d: 1 %s\n",num+1,kao);
        printf("NA\n");
        return;
    }
    return;
}
void operation_2(int num)
{
    int flag = 0;
    char kc[100];
    scanf("%s",kc);
    int sum = 0;
    int knum = 0;
    for(int i = 0; i < n; i++)
    {
        if(pat[i].id[1]==kc[0] && pat[i].id[2]==kc[1] && pat[i].id[3]==kc[2])
        {
            knum++;
            sum += pat[i].score;
            flag = 1;
        }
//        if(strstr(pat[i].id,kc)!=NULL)
//        {
//
//        }
    }
    if(flag==1)
    {
        printf("Case %d: 2 %s\n",num+1,kc);
        printf("%d %d\n",knum,sum);
    }
    else
    {
        printf("Case %d: 2 %s\n",num+1,kc);
        printf("NA\n");
    }
}
void operation_3(int num)
{
    char date[100];
    int kk[1000]={0};
    KS ks[100];
    int ksl = 0;
    scanf("%s",date);
    for(int i  = 0; i < n; i++)
    {
        int fl = 0;
        for(int j = 0; j < 6; j++)
        {
            if(pat[i].id[4+j]==date[j])
                fl++;
        }
        if(fl==6)
        {
            int kkk = ((int)pat[i].id[1]-48)*100 + ((int)pat[i].id[2]-48)*10 + ((int)pat[i].id[3]-48);
            //printf("%d\n",kkk);
            kk[kkk]++;
        }
    }
    for(int i = 0; i < 1000; i++)
    {
        if(kk[i]!=0)
        {
            ks[ksl].k = i;
            ks[ksl].r = kk[i];
            ksl++;
        }
    }
    for(int i = 0; i < ksl; i++)
    {

        for(int j = i; j < ksl; j++)
        {
            if(ks[i].r < ks[j].r)
            {
                KS temp;
                temp = ks[i];
                ks[i] = ks[j];
                ks[j] = temp;
            }
        }
    }
    printf("Case %d: 3 %s\n",num+1,date);
    if(ksl==0)
    {
        printf("NA\n");
        return;
    }
    for(int i = 0; i < ksl; i++)
    {
        printf("%d %d\n",ks[i].k,ks[i].r);
    }
}
int main()
{
    int m;
    scanf("%d %d",&n,&m);
    char id[100];
    int score = 0;
    for(int i  = 0; i < n; i++)
    {
        scanf("%s %d",id,&score);
        strcpy(pat[i].id,id);
        pat[i].score = score;
        //int kkk = ((int)pat[i].id[1]-48)*100 + ((int)pat[i].id[2]-48)*10 + ((int)pat[i].id[3]-48);
        //printf("%d\n",kkk);
        //kk[kkk]++;
    }
    for(int i  = 0; i < n; i++)
    {
        //printf("%d\n",pat[i].score);
        if(pat[i].id[0]=='T')
        {
            strcpy(pat_t[t].id, pat[i].id);
            pat_t[t].score = pat[i].score;
            t++;
        }
        if(pat[i].id[0]=='A')
        {
            strcpy(pat_a[a].id, pat[i].id);
            pat_a[a].score = pat[i].score;
            a++;
        }
        if(pat[i].id[0]=='B')
        {
            strcpy(pat_b[b].id, pat[i].id);
            pat_b[b].score = pat[i].score;
            b++;
        }
    }
    for(int i = 0; i < m; i++)
    {
        int opera = 0;
        scanf("%d",&opera);
        if(opera==1)
        {
            operation_l(i);
        }
        else if(opera==2)
        {
            operation_2(i);
        }
        else if(opera==3)
        {
            operation_3(i);
        }
        else
        {
            char err[60];
            scanf("%s",err);
            printf("Case %d: %d %s\n",i+1,opera,err);
            printf("NA\n");
        }
    }
//    for(int i  = 0; i < n; i++)
//    {
//        printf("%s ",pat[i].id);
//        printf("%d\n",pat[i].score);
//    }

//    for(int i = 0; i < t; i++)
//    {
//        printf("%s ",pat_t[i].id);
//        printf("%d\n",pat_t[i].score);
//    }
//    for(int i = 0; i < a; i++)
//    {
//        printf("%s ",pat_a[i].id);
//        printf("%d\n",pat_a[i].score);
//    }
//    for(int i = 0; i < b; i++)
//    {
//        printf("%s ",pat_b[i].id);
//        printf("%d\n",pat_b[i].score);
//    }
}

/**


32 20
T107180908020 90
T107180908028 90
T117180908027 90
T117180908029 90
T122180908003 86
T122180908002 98
T127180908027 62
T127180908008 100
A107180908120 90
A107180908128 90
A117180908127 90
A117180908129 90
A122180908103 86
A122180908102 98
A127180908127 62
A127180908108 100
B107180908220 90
B107180908228 90
B117180908227 90
B117180908229 90
B122180908203 86
B122180908202 98
B127180908227 62
B127180908208 100
B207180908320 90
B207180908328 90
B117180908327 90
B117180908329 90
B122180908303 86
B122180908302 98
B127180908327 62
B127180908308 100
1 T
Case 1: 1 A
A107180908020 90
A107180908028 90
A107180908027 90
A112180318002 98
A107180908108 100
A107180908029 90



**/
