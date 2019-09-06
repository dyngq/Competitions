#include <bits/stdc++.h>

using namespace std;

int main()
{

    int i = 1;
    while(1)
    {

        if(i%3==0&&i%4==1&&i%5==4&&i%6==3&&i%7==0&&i%8==1&&i%9==0)
        {
            cout << i << endl;
            i++;i++;
        }
        else
        {
            i++;i++;
        }
        if(i>=99999)
            break;
    }

}
