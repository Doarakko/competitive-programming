#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll n, x, b = -1, sum = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = x - (i + 1);
    }
    sort(a, a + n);
    if (n % 2 == 1)
    {
        b = a[n / 2];
    }
    else
    {
        b = (a[n / 2] + a[n / 2 - 1]) / 2;
    }
    for (ll i = 0; i < n; i++)
    {
        sum += abs(a[i] - b);
    }
    cout << sum << endl;
    return 0;
}
