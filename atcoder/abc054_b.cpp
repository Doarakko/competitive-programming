#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;
    string s;
    vector<string> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    bool flag = false;
    for (int i = 0; i < n && !flag; i++)
    {
        for (int j = 0; j < n && !flag; j++)
        {
            if (a[i][j] == b[0][0])
            {
                flag = true;
                for (int k = 0; k < m && flag; k++)
                {
                    for (int l = 0; l < m && flag; l++)
                    {
                        if (i + k < n && j + l < n)
                        {
                            if (a[i + k][j + l] != b[k][l])
                            {
                                flag = false;
                            }
                        }
                        else
                        {
                            flag = false;
                        }
                    }
                }
            }
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
