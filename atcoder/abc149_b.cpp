#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll a, b, k;
    cin >> a >> b >> k;

    ll x, y;
    x = max((ll)0, a - k);
    y = max((ll)0, b + min((ll)0, a - k));
    printf("%lld %lld\n", x, y);
}
