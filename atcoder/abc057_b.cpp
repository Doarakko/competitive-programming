#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;
    ll sx[n], sy[n], cx[m], cy[m];
    for (int i = 0; i < n; i++)
    {
        cin >> sx[i] >> sy[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> cx[i] >> cy[i];
    }
    ll d, min, min_num;
    for (int i = 0; i < n; i++)
    {
        min = LLONG_MAX;
        for (int j = 0; j < m; j++)
        {
            d = abs(sx[i] - cx[j]) + abs(sy[i] - cy[j]);
            if (min > d)
            {
                min = d;
                min_num = j;
            }
        }
        cout << min_num + 1 << endl;
    }
    return 0;
}
