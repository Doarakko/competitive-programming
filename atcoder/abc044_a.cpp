#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            ans += x;
        }
        else
        {
            ans += y;
        }
    }
    cout << ans << endl;
}
