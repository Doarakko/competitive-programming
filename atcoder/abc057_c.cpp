#include <iostream>

using namespace std;
using ll = long long;
int main(int argc, const char *argv[])
{
    ll n;
    cin >> n;
    ll a, b, ans = 10000000000;
    for (ll i = 1; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            a = to_string(i).length();
            b = to_string(n / i).length();

            if (max(a, b) < ans)
            {
                ans = max(a, b);
                // cout << i << " " << n / i << " " << ans << endl;
            }
        }
    }
    cout << ans << endl;
}
