#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, cnt = 0;
    cin >> n;
    ll x;
    // vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        // v[i] = x;
        while (x > 0 && x % 2 == 0)
        {
            if (x % 2 == 0)
            {
                cnt++;
                x /= 2;
            }
            else
            {
                break;
            }
        }
    }
    cout << cnt << endl;
}
