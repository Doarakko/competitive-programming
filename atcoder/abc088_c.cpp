#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int c[3][3];
    int x;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            c[i][j] = x;
        }
    }

    bool flag;
    int a[3], b[3];
    for (int i = 0; i <= 100; i++)
    {
        flag = true;
        a[0] = i;
        b[0] = c[0][0] - a[0];
        b[1] = c[0][1] - a[0];
        b[2] = c[0][2] - a[0];

        a[1] = c[1][0] - b[0];
        a[2] = c[2][0] - b[0];

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (c[j][k] != a[j] + b[k])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            break;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
