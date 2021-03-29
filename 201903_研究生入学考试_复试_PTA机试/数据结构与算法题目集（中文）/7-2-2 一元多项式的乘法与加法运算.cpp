#include <bits/stdc++.h>

using namespace std;


int flag = 0;
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
    int mat[10000] = {0};
    for(int j = 0; j < m_num * 2; j++)
    {
        for(int i = 0; i < n_num * 2; i++)
        {
            if(i%2==0&&j%2==0) //都是 系数
            {
                int a = n_a[i] * m_a[j];
                int x = n_x[i+1] + m_x[j+1];
                mat[x] += a;
                //cout << n_a[i] << " " << m_a[j] << " ";
//                cout << n_a[i] * m_a[j] << " ";
//                cout << n_x[i+1] + m_x[j+1] << " ";
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
    int last = 10000-2;
    for(int i = 10000-2; i>=0; i--)
    {
        if(mat[i]!=0)
            last = i;
    }
    for(int i = 10000-2; i>last; i--)
    {
        if(mat[i]!=0)
            cout << mat[i] << " " << i << " ";
    }
    cout<<mat[last]<<" "<<last<<endl;
    int n_flag = 0;
    int m_flag = 0;
    int i = 0,j = 0;
    while(i<n_num*2 && j<m_num*2)
    {
//        cout << i << " " << j;
//        cout <<endl;
        if(i%2==0&&j%2==0) //都是 系数
        {
            if(n_x[i+1]==m_x[j+1])
            {
                if(n_a[i]!=-m_a[j])
                {
                    //cout << "flag1" << endl;
                    cout << n_a[i] + m_a[j] << " ";
                    cout << n_x[i+1]<< " ";
                }
                else
                    flag = 1;
                i++;
                j++;
                i++;
                j++;
            }
            else if(n_x[i+1]>m_x[j+1])
            {
                //cout << "flag2" << endl;
                cout << n_a[i] << " ";
                cout << n_x[i+1]<< " ";
                i++;
                i++;
            }
            else if(n_x[i+1]<m_x[j+1])
            {
                //cout << "flag3" <<endl;
                cout << m_a[j] << " ";
                cout << m_x[j+1]<< " ";
                j++;
                j++;
            }

        }

//                cout << n_a[i] * m_a[j] << " ";
//                cout << n_x[i+1] + m_x[j+1] << " ";
            //cout << n_a[i] << " " << m_a[j] << " ";
//                cout << n_a[i] << " " << m_a[j] << " ";
//                cout << "   ";
//                cout << n_x[i+1] << " " << m_x[j+1] << " ";
//                cout << endl;
    }
    if(j>=m_num*2&&flag==0)
    {
        //cout<<"1error"<<endl;
        while(i<n_num*2-1)
        {
            if(i % 2 == 0)
                cout << n_a[i] << " ";
            else
                cout << n_x[i] << " ";
            i++;
        }
        cout << n_x[i];
    }
    else if(i>=n_num*2&&flag==0)
    {
        //cout<<"2error"<<endl;
        while(j<m_num*2-1)
        {
            if(j % 2 == 0)
                cout << m_a[j] << " ";
            else
                cout << m_x[j] << " ";
            j++;
        }
        cout << m_x[i];
    }
    return 0;

}
