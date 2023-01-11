#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, q, l, r;
    string s;
    cin >> n >> q >> s;

    int a[n + 1];
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == 'A' && s[i] == 'C')
        {
            a[i] = a[i - 1] + 1;
        }
        else
        {
            a[i] = a[i - 1];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }
    // cout << endl;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        cout << a[r - 1] - a[l - 1] << endl;
    }
}
