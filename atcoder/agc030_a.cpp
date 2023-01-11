#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = -1;
    if (a + b >= c)
    {
        ans = b + c;
    }
    else
    {
        ans = b + (a + b + 1);
    }
    cout << ans << endl;
}
