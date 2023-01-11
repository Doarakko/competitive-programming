#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m;
    ll x, y, z, sum = 0;
    cin >> n >> m;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        v[i] = x + y + z;
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++)
    {
        sum += v[n - (i + 1)];
    }
    cout << sum << endl;
    return 0;
}
