#include <iostream>

using namespace std;
using ll = long long;

ll gcd(ll x, ll y)
{
    if (x < y)
    {
        swap(x, y);
    }

    ll r;
    // ユーグリッドの互除法
    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return y;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;
}
