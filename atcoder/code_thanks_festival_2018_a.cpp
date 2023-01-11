#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll t, a, b, c, d;
    cin >> t >> a >> b >> c >> d;

    ll ans;
    if (a > t && c > t)
    {
        ans = 0;
    }
    else if (a + c <= t)
    {
        ans = b + d;
    }
    else if (a > t)
    {
        ans = d;
    }
    else if (c > t)
    {
        ans = b;
    }
    else
    {
        ans = max(b, d);
    }
    cout << ans << endl;
}
