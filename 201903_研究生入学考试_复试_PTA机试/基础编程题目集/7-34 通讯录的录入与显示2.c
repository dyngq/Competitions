
#include<stdio.h>
#include<stdlib.h>
#include<string.h>//һ��ȫд��ȥ�����������õ�


struct list{
    char name[11];
    char num[17];
    char phone[17];
	char sex[2];//����Ҫ������飡��Ȼ�ո�Բ���
	char birthday[11];
};
struct list p[100];


int main()
{

int i=0;int j=0,N,K;
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%s %s %c %s %s\n",&p[i].name,&p[i].birthday,&p[i].sex,&p[i].num,&p[i].phone);
}


    scanf ("%d", &K);

    int number;
    for (i=0; i<K; i++) {
        scanf ("%d", &number);
        if (number < N && number>=0)
		{
           printf("%s %s %s %s %s\n",p[number].name,p[number].num,p[number].phone,p[number].sex,p[number].birthday);
        } else {
            printf ("Not Found\n");
        }
    }
    return 0;

}
