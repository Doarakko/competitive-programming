#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll n, a;
    cin >> n;
    vector<ll> s(n + 1);
    s[0] = 0;
    for (ll i = 1; i < n + 1; i++)
    {
        cin >> a;
        s[i] += s[i - 1] + a;
    }
    sort(s.begin(), s.end());
    /*
    for (ll i = 0; i < n + 1; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    */
    bool flag = true;
    ll ans = 0;
    for (ll i = 0; i < n + 1 && flag; i++)
    {
        ll cnt = 1;
        for (ll j = i + 1; j < n + 1; j++)
        {
            if (j == n)
            {
                flag = false;
            }
            if (s[i] == s[j])
            {
                cnt++;
            }
            else
            {
                i = j - 1;
                break;
            }
        }
        if (cnt >= 2)
        {
            ll top = 1, bottom = 2;
            for (ll k = cnt; k > cnt - bottom; k--)
            {
                top *= k;
            }
            ans += top / bottom;
        }
    }
    cout << ans << endl;

    return 0;
}
