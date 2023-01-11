#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m, l, r;
    cin >> n >> m;
    int r_min = INT_MAX, l_max = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        if (l > l_max)
        {
            l_max = l;
        }
        if (r < r_min)
        {
            r_min = r;
        }
    }
    if (l_max > r_min)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << max(l_max - r_min + 1, r_min - l_max + 1) << endl;
    }
}
