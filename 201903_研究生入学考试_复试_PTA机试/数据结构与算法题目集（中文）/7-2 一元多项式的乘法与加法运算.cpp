#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n_num, m_num;
    cin >> n_num;
    int n_a[n_num];
    int n_x[n_num];
    for(int i = 0; i < n_num * 2; i++)
    {
        if(i % 2 == 0)
            cin >> n_a[i];
        else
            cin >> n_x[i];
    }

//    cout << "验证N：" << endl;
//    for(int i = 0; i < n_num * 2; i++)
//    {
//        if(i % 2 == 0)
//            cout << n_a[i] << " ";
//        else
//            cout << n_x[i] << " ";
//    }
//    cout << endl;

    cin >> m_num;
    int m_a[m_num];
    int m_x[m_num];
    for(int i = 0; i < m_num * 2; i++)
    {
        if(i % 2 == 0)
            cin >> m_a[i];
        else
            cin >> m_x[i];
    }
//    cout << "验证M：" << endl;
//    for(int i = 0; i < m_num * 2; i++)
//    {
//        if(i % 2 == 0)
//            cout << m_a[i] << " ";
//        else
//            cout << m_x[i] << " ";
//    }
    for(int j = 0; j < m_num * 2; j++)
    {
        for(int i = 0; i < n_num * 2; i++)
        {
            if(i%2==0&&j%2==0) //都是 系数
            {
                //cout << n_a[i] << " " << m_a[j] << " ";
                cout << n_a[i] * m_a[j] << " ";
                cout << n_x[i+1] + m_x[j+1] << " ";
//                cout << n_a[i] << " " << m_a[j] << " ";
//                cout << "   ";
//                cout << n_x[i+1] << " " << m_x[j+1] << " ";
//                cout << endl;
            }
//            if(i%2==1&&j%2==1) //都是 指数
//            {
//                cout << n_x[i] << " " << m_x[j] << " ";
//                //cout << n_x[i] + m_x[j] << " ";
//            }
        }
    }
    cout<<endl;
    int n_flag = 0;
    int m_flag = 0;
    int i = 0,j = 0;
    while(1)
    {
        if(i>=n_num * 2-1||j>=m_num * 2-1)
        {
            break;
        }
        if(i%2==0&&j%2==0) //都是 系数
        {
            if(n_x[i+1]==m_x[j+1])
            {
                cout << n_a[i] + m_a[j] << " ";
                cout << n_x[i+1]<< " ";
                i++;
                j++;
                i++;
                j++;
            }
            if(n_x[i+1]>m_x[j+1])
            {
                cout << n_a[i] << " ";
                cout << n_x[i+1]<< " ";
                i++;
                i++;
            }
            if(n_x[i+1]<m_x[j+1])
            {
                cout << m_a[j] << " ";
                cout << m_x[j+1]<< " ";
                j++;
                j++;
            }
//                cout << n_a[i] * m_a[j] << " ";
//                cout << n_x[i+1] + m_x[j+1] << " ";
            //cout << n_a[i] << " " << m_a[j] << " ";
//                cout << n_a[i] << " " << m_a[j] << " ";
//                cout << "   ";
//                cout << n_x[i+1] << " " << m_x[j+1] << " ";
//                cout << endl;
        }
    }

    return 0;

}
