#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, t;
    cin >> n >> t;
    int ans = 10000;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (y <= t && ans > x)
        {
            ans = x;
        }
    }
    if (ans == 10000)
    {
        cout << "TLE" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
