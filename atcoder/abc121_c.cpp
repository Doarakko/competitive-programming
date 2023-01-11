#include <iostream>
#include <vector>
#include <cmath>

#define vsort(v) sort(v.begin(), v.end())
#define P pair
#define X first
#define Y second

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<P<ll, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].X >> v[i].Y;
    }
    vsort(v);

    ll sum = 0;
    int cnt = 0;
    for (int i = 0; i < n && cnt < m; i++)
    {
        sum += v[i].X * min(v[i].Y, m - cnt);
        cnt += min(v[i].Y, m - cnt);
    }
    cout << sum << endl;
}
