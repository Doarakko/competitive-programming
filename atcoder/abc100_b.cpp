#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int d, n;
    cin >> d >> n;
    int ans;

    if (d == 2)
    {
        ans = 100 * 100;
        ans = ans * n;
        if (n == 100)
        {
            ans += 100 * 100;
        }
    }
    else if (d == 1)
    {
        ans = 100;
        ans *= n;
        if (n == 100)
        {
            ans += 100;
        }
    }
    else
    {
        ans = n;
        if (n == 100)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
