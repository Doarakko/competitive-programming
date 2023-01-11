#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, cnt, min = 1000000000;
    cin >> n;
    ll x;
    // vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        // v[i] = x;
        cnt = 0;
        while (x % 2 == 0)
        {
            x /= 2;
            cnt++;
        }
        if (cnt < min)
        {
            min = cnt;
        }
    }
    cout << min << endl;

    return 0;
}
