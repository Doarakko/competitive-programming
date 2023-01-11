#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>

#define P pair
#define X first
#define Y second

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<P<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].X >> v[i].Y;
    }

    double max = -1, d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d = sqrt(pow(v[i].X - v[j].X, 2) + pow(v[i].Y - v[j].Y, 2));
            if (d > max)
            {
                max = d;
            }
        }
    }

    cout << setprecision(-3) << max << endl;
}
