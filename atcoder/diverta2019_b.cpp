#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int r, g, b, n;
    cin >> r >> g >> b >> n;

    int ans = 0;
    for (int i = 0; r * i <= n; i++)
    {
        for (int j = 0; r * i + g * j <= n; j++)
        {
            if ((n - (r * i + g * j)) % b == 0)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
