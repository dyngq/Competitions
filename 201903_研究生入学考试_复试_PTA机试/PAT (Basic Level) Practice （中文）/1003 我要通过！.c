#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/**
˼·��
һ��ʼ�����Сʱ���޴����֣����������������һ����ѧ���ɷ��ļ�ģ���⣬�����뵽kmp����ȥ�ˡ�����
��ʵ�����ʱ�򣬿���������������. ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ġ����м�����һ��A���ұ�ȴ������һ��a�������������Թ�ϵ��P��T֮���A����������һ������T�ұ�ȴ������a�����ǵ��Եó���ѧ��ϵʽ
a��A�ĸ���*��b��A�ĸ���+1�� = c��A�ĸ���+a��A�ĸ���
���˾Ϳ��Ա�����
Ŷ������һ��ϸ��
*PT�м����Ҫ��A
**/

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        char test[102];
        scanf("%s",test);
        int flag = 0;
        if(strlen(test)<3)
            flag = 1;
        for(int j = 0;j<strlen(test); j++)
        {
            if(test[j]!='P'&&test[j]!='T'&&test[j]!='A')
            {
                flag = 1;
                break;
            }
        }
        //printf("%d\n",flag);
        if(flag==0&&(strstr(test,"PAT")!=0 || strstr(test,"PAAT")!=0))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
