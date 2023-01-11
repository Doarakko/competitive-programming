#include <iostream>

using namespace std;
int main(int argc, const char *argv[])
{
    double n, m;
    cin >> n >> m;
    if (n >= 12)
    {
        n -= 12;
    }
    n = (n * 60 + m) * (360 / 60 / 12.0);
    m = m * (360 / 60);

    // cout << "n: " << n << " m: " << m << endl;
    double ans = abs(n - m);
    cout << min(ans, 360 - ans) << endl;
}
