#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll N;
    cin >> N;
    ll w;
    for (ll h = 1; h <= 3500; h++)
    {
        for (ll n = 1; n <= 3500; n++)
        {
            if ((4 * h * n - N * n - N * h) > 0 && (N * n * h) % (4 * h * n - N * n - N * h) == 0)
            {
                w = (N * n * h) / (4 * h * n - N * n - N * h);
                cout << h << ' ' << n << ' ' << w << endl;
                return 0;
            }
        }
    }
}
