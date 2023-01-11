#include <iostream>
#include <math.h>

#define X first
#define Y second

#define P pair

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    P<int, int> s_p, e_p;
    int t, v, n;
    cin >> s_p.X >> s_p.Y >> e_p.X >> e_p.Y >> t >> v >> n;

    int x, y;
    bool flag = false;
    double d;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        d = sqrt(pow(s_p.X - x, 2) + pow(s_p.Y - y, 2)) + sqrt(pow(e_p.X - x, 2) + pow(e_p.Y - y, 2));
        if (d <= t * v)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
