#include <stdio.h>
#include <string.h>
#include <math.h>
 int main()
{
 int A;
 int N;
 int i;
 int j;
 int t;
 int flag;
 int num[100000];
 scanf("%d%d",&A,&N);
 if(N == 0)
 printf("0\n");
 else
 {
      flag = 0;
      for(i=N, j=0; i>=1; i--, j++) //����һ��ʼ�Ҳ����j++����˼����������������������λ����ӣ��н�λ�ͽ�λ
       {

            t = A*i + flag;

            flag = t / 10;

            num[j] = t % 10;

        }

         if(flag > 0)//���һλ��λ���еĻ��ٽ�һλ
         {
           num[j] = flag; //
           j++;
         }

       for(i=j-1; i>=0; i--) //֮ǰһֱ���Ƿ�������  ��ʮ��ǧ�򡣡���Ҫ������ǧ��ʮ��//�ر�ע��j-1����Ϊ֮ǰ���һ�ζ����һλ//��ʵ���ڿ���Ҫ��Ҫ����1000001

        {
            printf("%d",num[i]);
        }

  }

    return 0;

  }
