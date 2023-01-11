#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll n;
    cin >> n;
    vector<ll> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    vsort(v);
    ll ans = ceil(1.0 * n / v[0]) + 4;
    cout << ans << endl;
}
