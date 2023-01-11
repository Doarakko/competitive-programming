#include <iostream>
#include <vector>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    ll x, a;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v[i] = a;
    }
    vsort(v);
    int cnt = 0;
    for (int i = 0; i < n && x > 0; i++)
    {
        if (i == n - 1)
        {
            if (v[i] == x)
            {
                cnt++;
                x -= v[i];
            }
        }
        else
        {
            if (v[i] <= x)
            {
                cnt++;
                x -= v[i];
            }
        }
    }
    cout << cnt << endl;
}
