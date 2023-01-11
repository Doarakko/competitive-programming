#include <iostream>
#include <vector>

#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;
int main(int argc, const char *argv[])
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > x)
        {
            cnt += v[i] - x;
            v[i] = x;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] + v[i + 1] > x)
        {
            cnt += v[i] + v[i + 1] - x;
            v[i + 1] -= v[i] + v[i + 1] - x;
        }
    }

    cout << cnt << endl;
}
