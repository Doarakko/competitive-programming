#include <iostream>

#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll n;
    cin >> n;
    string ans = "";
    if (n == 0)
    {
        ans = '0';
    }
    while (n != 0)
    {
        if (n % -2 == 0)
        {
            ans += '0';
            n /= -2;
        }
        else
        {
            ans += '1';
            if (n < 0)
            {
                n = n / -2 + 1;
            }
            else
            {
                n = n / -2;
            }
        }
        // cout << n << endl;
    }
    vrev(ans);
    cout << ans << endl;
}
