#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length = 0;

typedef struct qq
{
    char id[11];
    char password[20];
    //length = 0;strcpy
};

void operation_l(char id[],char pass[],struct qq q[])
{
    int flag = 0;
    for(int i = 0;i<length;i++)
    {
        //printf("%s %s %d\n",id,q[i].id, strcmp(pass,q[i].password));
        if(strcmp(id,q[i].id)==0)
        {
            //printf("%d\n",strcmp(pass,q[i].password));
            if(strcmp(pass,q[i].password)==0)
            {
                printf("Login: OK\n");
                flag = 1;
                break;
            }
            else if(strcmp(pass,q[i].password)!=0)
            {
                printf("ERROR: Wrong PW\n");
                flag = 1;
                break;
            }
        }
    }
    if(flag==0)
        printf("ERROR: Not Exist\n");
}
int operation_3(char id[],char pass[],struct qq q[])
{
    int flag = 0;
    for(int i = 0;i<length;i++)
    {
        if(strcmp(id,q[i].id)==0)
        {
            if(strcmp(pass,q[i].password)==0)
            {
                //printf("Login: OK\n");
                flag = 1;return 1;
                break;
            }
            else
            {
                //printf("ERROR: Wrong PW\n");
                flag = 1;return 1;
                break;
            }
        }
    }
    if(flag==0)
        return 0;
        //printf("ERROR: Not Exist\n");
}

void operation_2(char id[],char pass[],struct qq q[])
{
    if(operation_3(id,pass,q)==1)
        printf("ERROR: Exist\n");
    else
    {
        strcpy(q[length].id,id);
        strcpy(q[length].password,pass);
        length++;
        printf("New: OK\n");
    }
}

int main()
{
    struct qq q[5000];
    //struct qq temp[9000];
    char t1[1000];
    char t2[2000];
    int n;
    scanf("%d",&n);
    char opera[2];

    for(int i = 0; i < n; i++)
    {
        scanf("%s",opera);
        scanf("%s",t1);        //printf("%s\n",temp[i].id);
        scanf("%s",t2);  //printf("%s\n",temp[i].password);

        //printf("%s\n",temp[i].id);
        //printf("%s\n\n",temp[i].password);

        //printf("%s\n",opera);
        if(strcmp(opera,"L")==0)
            operation_l(t1,t2,q);
        else
            operation_2(t1,t2,&q);
//        if(strcmp(opera,"L")==0)
//            printf("success\n");
//        else
//            printf("error\n");
        //printf("\n%d\n",i);
    }
//    for(int i = 0; i < n; i++)
//    {
//        printf("%s                  ",temp[i].id);
//        printf("%s\n",temp[i].password);
//    }
    return 0;
}

/**

80
N 123456701 asdfghjklzxcvbnm
N 123456702 asdfghjklzxcvbnm
N 123456703 asdfghjklzxcvbnm
N 123456704 asdfghjklzxcvbnm
N 123456705 asdfghjklzxcvbnm
N 123456706 asdfghjklzxcvbnm
N 123456707 asdfghjklzxcvbnm
N 123456708 asdfghjklzxcvbnm
N 123456709 asdfghjklzxcvbnm
N 123456710 asdfghjklzxcvbnm
N 123456712 asdfghjklzxcvbnm
N 123456713 asdfghjklzxcvbnm
N 123456714 asdfghjklzxcvbnm
N 123456715 asdfghjklzxcvbnm
N 123456716 asdfghjklzxcvbnm
N 123456717 asdfghjklzxcvbnm
N 123456718 asdfghjklzxcvbnm
N 123456719 asdfghjklzxcvbnm
N 123456720 asdfghjklzxcvbnm
N 123456721 asdfghjklzxcvbnm
N 123456722 asdfghjklzxcvbnm
N 123456723 asdfghjklzxcvbnm
N 123456724 asdfghjklzxcvbnm
N 123456725 asdfghjklzxcvbnm
N 123456726 asdfghjklzxcvbnm
N 123456727 asdfghjklzxcvbnm
N 123456728 asdfghjklzxcvbnm
N 123456729 asdfghjklzxcvbnm
N 123456730 asdfghjklzxcvbnm
N 123456731 asdfghjklzxcvbnm
N 123456732 asdfghjklzxcvbnm
N 123456733 asdfghjklzxcvbnm
N 123456734 asdfghjklzxcvbnm
N 123456735 asdfghjklzxcvbnm
N 123456736 asdfghjklzxcvbnm
N 123456737 asdfghjklzxcvbnm
N 123456738 asdfghjklzxcvbnm
N 123456739 asdfghjklzxcvbnm
N 123456740 asdfghjklzxcvbnm
N 123456741 asdfghjklzxcvbnm
N 123456742 asdfghjklzxcvbnm
N 123456743 asdfghjklzxcvbnm
N 123456744 asdfghjklzxcvbnm
N 123456745 asdfghjklzxcvbnm
N 123456746 asdfghjklzxcvbnm
N 123456747 asdfghjklzxcvbnm
N 123456748 asdfghjklzxcvbnm
N 123456749 asdfghjklzxcvbnm
N 123456750 asdfghjklzxcvbnm
N 123124567 asdfghjklzxcvbnm
N 123453567 asdfghjklzxcvbnm
N 123413567 asdfghjklzxcvbnm
N 144234567 asdfghjklzxcvbnm
N 123433567 asdfghjklzxcvbnm
N 124534567 asdfghjklzxcvbnm
N 123455567 asdfghjklzxcvbnm
N 123455567 asdfghjklzxcvbnm
N 123334567 asdfghjklzxcvbnm
N 123456723 asdfghjklzxcvbnm
N 123443567 asdfghjklzxcvbnm
N 123412567 asdfghjklzxcvbnm
N 123432567 asdfghjklzxcvbnm
N 123423567 asdfghjklzxcvbnm
N 123412567 asdfghjklzxcvbnm
N 121234567 asdfghjklzxcvbnm
N 112234567 asdfghjklzxcvbnm
N 123474567 asdfghjklzxcvbnm
N 127434567 asdfghjklzxcvbnm
N 123456747 asdfghjklzxcvbnm
N 123423567 asdfghjklzxcvbnm
N 121234567 asdfghjklzxcvbnm
N 123453567 asdfghjklzxcvbnm
N 123321457 asdfghjklzxcvbnm
N 123412567 asdfghjklzxcvbnm
N 123234567 asdfghjklzxcvbnm
N 123456723 asdfghjklzxcvbnm
N 123456097 asdfghjklzxcvbnm
N 123784567 asdfghjklzxcvbnm
N 123784567 asdfghjklzxcvbnm
N 128734567 asdfghjklzxcvbnm

N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
N 1234567 asdfghjklzxcvbnm
**/
