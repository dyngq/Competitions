#include<iostream>
using namespace std;
int main()
{
	char NUM[10]={'a','b','c','d','e','f','g','h','i','j'};
	//������
	char UNIT[10]={0,0,'S','B','Q','W','S','B','Q','Y'};
	//�浥λ��Ϊ���±���λ����Ӧ��ǰ������Ԫ��0
	char RESULT[17];//����������9�����֣�8����λ
	int n,k=0,bitnum=0,cur,pre;
	//�����������֣��������������λ������ǰλ��ǰһλ
	cin>>n;
	if(!n)
	{
		cout<<NUM[0];//ע����������Ϊ0�����a
		return 0;
	}
	while(n)//����ӵ�λ����λȡλ�ж�
	{
		cur=n%10;
		n/=10;//ע��n��ʱ��10
		bitnum++;
		if(cur)//�����ǰλ��Ϊ0
		{
			if(bitnum>1) //�����Ϊ��λ���浥λ
			RESULT[k++]=UNIT[bitnum];
			RESULT[k++]=NUM[cur];//������Σ�������
		}
		else//�����ǰλΪ0
		{
			if(bitnum==5)//��Ϊ��λ
			RESULT[k++]=UNIT[bitnum];//�ش浥λ
			else if(pre!=0&&bitnum!=4&&bitnum!=1)//����Ϊ��λ��ǧλ����λ����ǰһλ��Ϊ0
			RESULT[k++]=NUM[cur];//�浱ǰ������0
		}
		pre=cur;//ע�⼰ʱ���浱ǰλ
	}
	for(int i=k-1;i>=0;i--)//����������
	cout<<RESULT[i];
	return 0;
}
