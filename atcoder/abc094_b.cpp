#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m, x;
    cin >> n >> m >> x;

    int tmp, l = 0, r = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        if (tmp < x)
        {
            l++;
        }
        else
        {
            r++;
        }
    }
    if (l < r)
    {
        cout << l << endl;
    }
    else
    {
        cout << r << endl;
    }

    return 0;
}
