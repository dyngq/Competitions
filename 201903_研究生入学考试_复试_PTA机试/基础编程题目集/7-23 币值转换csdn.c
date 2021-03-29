#include<iostream>
using namespace std;
int main()
{
	char NUM[10]={'a','b','c','d','e','f','g','h','i','j'};
	//存数字
	char UNIT[10]={0,0,'S','B','Q','W','S','B','Q','Y'};
	//存单位，为将下标与位数对应，前两个单元存0
	char RESULT[17];//存结果，最多存9个数字，8个单位
	int n,k=0,bitnum=0,cur,pre;
	//定义输入数字，结果数组索引，位数，当前位，前一位
	cin>>n;
	if(!n)
	{
		cout<<NUM[0];//注意若输入数为0，输出a
		return 0;
	}
	while(n)//否则从低位到高位取位判定
	{
		cur=n%10;
		n/=10;//注意n及时除10
		bitnum++;
		if(cur)//如果当前位不为0
		{
			if(bitnum>1) //如果不为个位，存单位
			RESULT[k++]=UNIT[bitnum];
			RESULT[k++]=NUM[cur];//无论如何，存数字
		}
		else//如果当前位为0
		{
			if(bitnum==5)//若为万位
			RESULT[k++]=UNIT[bitnum];//必存单位
			else if(pre!=0&&bitnum!=4&&bitnum!=1)//若不为万位，千位，个位，且前一位不为0
			RESULT[k++]=NUM[cur];//存当前的数字0
		}
		pre=cur;//注意及时保存当前位
	}
	for(int i=k-1;i>=0;i--)//倒序输出结果
	cout<<RESULT[i];
	return 0;
}
