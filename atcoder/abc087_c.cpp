#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, x;
    cin >> n;
    int a[2][n];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            a[i][j] = x;
            // cout << a[i][j] << " ";
        }
        // cout << endl;
    }

    int c[2][n];
    c[0][0] = a[0][0];
    c[1][0] = a[1][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < n; j++)
        {
            c[i][j] = a[i][j] + c[i][j - 1];
            // cout << c[i][j] << " ";
        }
        // cout << endl;
    }

    int sum = 0, max;
    max = c[1][n - 1] + c[0][0];
    for (int i = 1; i < n - 1; i++)
    {
        sum = c[0][i] + (c[1][n - 1] - c[1][i - 1]);
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max << endl;

    return 0;
}
