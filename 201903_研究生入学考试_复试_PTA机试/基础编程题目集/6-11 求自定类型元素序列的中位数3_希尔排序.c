#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */


ElementType Median( ElementType A[], int N )
{
  ElementType temp;
  for(int gap= N/2; gap> 0; gap= gap/ 2) //gap��ÿ���������ļ����ÿ�μ����С������������С�취Ҳ���ԣ�
  {
    for(int i= gap; i< N; i++)//�൱����ͬһ���ڲ���ֱ�Ӳ�������
    {
      for(int j= i- gap; j>= 0 && A[j]> A[j+ gap]; j= j- gap)//���ͬһ����ǰһ��Ԫ�ش����� gap��λ�õ�Ԫ�أ������߽���λ��
      {
        temp= A[j];
        A[j]= A[j+ gap];
        A[j+ gap]= temp;
      }
    }
  }
  return A[N/ 2];//�����м�Ԫ��
}
