#include <iostream>
#include <cstdio>
using namespace std;

#define MAXSIZE 50
typedef int KeyType;

typedef  struct
{ KeyType  key;
} ElemType;

typedef  struct
{ ElemType  *R;
  int  length;
} SSTable;

void  Create(SSTable &T)
{ int i;
  T.R=new ElemType[MAXSIZE+1];
  cin>>T.length;
  for(i=1;i<=T.length;i++)
     cin>>T.R[i].key;
}

int  Search_Bin(SSTable T, KeyType k);

int main ()
{  SSTable T;  KeyType k;
   Create(T);
   cin>>k;
   int pos=Search_Bin(T,k);
   if(pos==0) cout<<"NOT FOUND"<<endl;
   else cout<<pos<<endl;
   return 0;
}

/* 请在这里填写答案 */
int mid;
int flag=1;
int  Search_Bin(SSTable T, KeyType k)
{
    //int length = T.length;
//    for(int i = 1; i <= T.length; i++)
//    {
//        cout << T.R[i].key << " ";
//    }
//    cout << endl;
    mid = T.length/2;
    //printf("%d\n",T.length);
    //printf("%d\n",mid);
    //printf("%d %d\n",T.length,mid);
    if(k == T.R[mid].key)
    {
        return flag;
    }
    else if(k != T.R[mid].key && T.R[1].key==T.R[2].key)
    {
        //printf("NOT FOUND");
        return 0;
    }
    else if(k < T.R[mid].key)
    {
        flag = flag-mid;
        T.length = T.length/2+1;
        Search_Bin(T,k);
    }
    else if(k > T.R[mid].key)
    {
        for(int i = 1; i <= T.length/2; i++)
        {
            T.R[i].key = T.R[i+T.length/2].key;
        }
        T.length = T.length/2+1;
        flag = flag+mid;
        Search_Bin(T,k);
    }

}
