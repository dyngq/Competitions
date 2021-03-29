#include <bits/stdc++.h>

using namespace std;

int flag = 0;//不需要进位为0

char per_add(char a,char b, int flag)
{
    if(a=='1')
        cout << "1" <<endl;
}

string add(string a, string b){
    int a_len = a.length();
    int b_len = b.length();

    int mi = 0;
    int ma = 0;
    mi = min(a_len,b_len);
    ma = max(a_len,b_len);
//    cout << mi << endl;
//    cout << ma << endl;
    string x;
    for(int i = 0; i <= mi; i++)
    {
        per_add(a[i],b[i],flag);
    }
    return x;
}

int main()
{
    string a,b;
    cin >> a ;
    cin >> b ;
    cout << add(a,b);
//    string a;
//    a = "asdasd1233";
//    cout << typeid(a[2]).name();
}


