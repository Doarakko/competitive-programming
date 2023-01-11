#include <iostream>
#include <vector>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int gcd(int x, int y)
{
    int r;

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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = v[0];
    for (int i = 1; i < n; i++)
    {
        ans = gcd(ans, v[i]);
    }
    cout << ans << endl;
}
