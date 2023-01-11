#include <iostream>
#include <iomanip>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    double ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        double y = 1;
        for (; x < k;)
        {
            x *= 2;
            y /= 2;
        }

        ans += 1.0 / n * y;
    }
    cout << fixed << setprecision(9) << ans << endl;
}
