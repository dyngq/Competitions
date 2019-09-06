#include <stdio.h>
#include <string.h>

int main()
{
//    printf("%d %d\n",'A','Z');//65 90
//    printf("%d %d\n",'A','G');//65 71
//    printf("%d %d\n",'0','9');//48 57
//    printf("%d %d\n",'A','N');//65 78
//    printf("%d %d\n",'a','z');//97 122
    char a[61],b[61],c[61],d[61];
    scanf("%s %s %s %s",a,b,c,d);
    int al,bl,cl,dl;
    al = strlen(a);
    bl = strlen(b);
    cl = strlen(c);
    dl = strlen(d);
    int flag1 = 0,flag2 = 0;
    int posj;
    for(int i = 0; i < al; i++)
    {
        if((int)a[i]>=65 && (int)a[i]<=71 && flag1 == 0)
        {
            for(int j = 0; j < bl ; j++)
            {
                if(a[i] == b[j] && flag1 == 0)
                {
                    switch(b[j])
                    {
                        case 'A':printf("MON ");break;
                        case 'B':printf("TUE ");break;
                        case 'C':printf("WED ");break;
                        case 'D':printf("THU ");break;
                        case 'E':printf("FRI ");break;
                        case 'F':printf("SAT ");break;
                        case 'G':printf("SUN ");break;
                    }
                    flag1 = 1;
                    i++;
                    posj = j;
                    break;
                }
            }
        }
        if( ( ((int)a[i]>=65 && (int)a[i]<=78) || ((int)a[i]>=48 && (int)a[i]<=57) ) && flag1 == 1)
        {
            //printf("%c\n",a[i]);
            for(int j = posj+1; j < bl ; j++)
            {
                if(a[i] == b[j] && flag1 == 1)
                {
                    switch(b[j])
                    {
                        case '0':printf("00:");break;
                        case '1':printf("01:");break;
                        case '2':printf("02:");break;
                        case '3':printf("03:");break;
                        case '4':printf("04:");break;
                        case '5':printf("05:");break;
                        case '6':printf("06:");break;
                        case '7':printf("07:");break;
                        case '8':printf("08:");break;
                        case '9':printf("09:");break;
                        case 'A':printf("10:");break;
                        case 'B':printf("11:");break;
                        case 'C':printf("12:");break;
                        case 'D':printf("13:");break;
                        case 'E':printf("14:");break;
                        case 'F':printf("15:");break;
                        case 'G':printf("16:");break;
                        case 'H':printf("17:");break;
                        case 'I':printf("18:");break;
                        case 'J':printf("19:");break;
                        case 'K':printf("20:");break;
                        case 'L':printf("21:");break;
                        case 'M':printf("22:");break;
                        case 'N':printf("23:");break;
                    }
                    flag1 = 2;
                    break;
                }
            }
        }
    }
    for(int i = 0; i < cl&&flag2==0; i++)
    {
        if( ( ((int)c[i]>=65 && (int)c[i]<=90) || ((int)c[i]>=97 && (int)c[i]<=122) ) && flag2 == 0)
        {
            for(int j = 0; j < dl&&flag2==0 ; j++)
            {
                if(c[i] == d[j])
                {
                    printf("%02d",j);
                    flag2 = 1;
                    break;
                }
            }
        }
    }


    return 0;
}
/**
3A485DjDkxh4hhGE
298D4akDfkkkkggEdAshDb
s1&hgsfdkasdasdadsadasdasdasdasasdasd
d1&HyQQQQQQQQQQcvnmasdasdasdasdddddasdasdasd

D0AAAAAaaaaDDDaaaaa
AaaD0aaAaDadaaa
aaaaaaaaa
aaaaaaaaa

**/
