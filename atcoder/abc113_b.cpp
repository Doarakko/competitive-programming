#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, t, a, h;
    cin >> n >> t >> a;
    int ans = -1;
    double dis = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> h;
        if (i == 0)
        {
            ans = 1;
            dis = abs(a - (t - h * 0.006));
        }
        else if (dis > abs(a - (t - h * 0.006)))
        {
            ans = i + 1;
            dis = abs(a - (t - h * 0.006));
        }
    }
    cout << ans << endl;
}
