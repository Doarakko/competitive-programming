#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>

#define vsort(v) sort(v.begin(), v.end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vsort(v);
    double ans = 0;
    for (int i = n - k; i < n; i++)
    {
        ans = (ans + v[i]) / 2.0;
    }
    cout << fixed << setprecision(6) << ans << endl;
}
