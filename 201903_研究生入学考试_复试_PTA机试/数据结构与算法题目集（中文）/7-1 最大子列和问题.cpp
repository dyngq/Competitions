#include <bits/stdc++.h>

using namespace std;

//int maxzl(int &a[])
//{
//
//}

int main()
{
    int num;
    int sum = 0;
    int max = 0;
    cin >> num;
    int a[num];
    for(int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < num; i++)
    {
        for(int j = i; j < num; j++)
        {
            sum = sum + a[j];
            if(sum > max)
                max = sum;
        }
        sum = 0;
    }
    cout << max;
    return 0;

//    for(int i = 0; i < num; i++)
//    {
//        cout << a[i];
//    }



    //maxzl(a);
//    for(int i = 0; i < num; i++)
//    {
//        cout << a[i] << " " ;
//    }
}
