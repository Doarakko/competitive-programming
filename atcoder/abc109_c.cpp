#include <iostream>

using namespace std;
using ll = long long;

// 最大公約数
ll gcd(ll x, ll y)
{
    ll r;

    // 引数チェック
    if (x == 0 || y == 0)
    {
        return 0;
    }

    // ユーグリッドの互除法
    // yで割り切れるまでループ
    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return y;
}

int main(int argc, const char *argv[])
{
    ll n, x, a, ans = -1, now;
    cin >> n >> x;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        now = abs(x - a);
        if (i == 0)
        {
            ans = now;
        }
        else
        {
            ans = gcd(ans, now);
        }
    }
    cout << ans << endl;
}
