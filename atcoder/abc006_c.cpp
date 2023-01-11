#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;

    if (n * 4 < m || n * 2 > m)
    {
        cout << "-1 -1 -1" << endl;
        return 0;
    }

    int a, b, c;
    for (int a = 0; a <= n; a++)
    {

        // m = 2a + 3b + 4c
        // a + b + c = n
        // b = n - (a + c)
        // m = 2a + 3(n-(a+c)) + 4c
        // m = 2a + 3n - 3a -3c + 4c
        // c = m + a - 3n
        // b = n - a - c
        // b = n - a - (m + a - 3n)
        // b = 4n - 2a -m
        b = 4 * n - 2 * a - m;
        c = m + a - 3 * n;
        if (a >= 0 && c >= 0)
        {
            cout << a << ' ' << b << ' ' << c << endl;
            return 0;
        }
        // cout << a << ' ' << b << ' ' << c << endl;
    }
    cout << "-1 -1 -1" << endl;
}
