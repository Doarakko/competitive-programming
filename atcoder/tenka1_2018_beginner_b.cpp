#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll a, b;
    int k;
    cin >> a >> b >> k;
    for (int i = 0; i < k; i++)
    {
        if (i % 2 == 0)
        {
            if (a % 2 == 0)
            {
                b += a / 2;
                a /= 2;
            }
            else
            {
                b += (a - 1) / 2;
                a = (a - 1) / 2;
            }
        }
        else
        {
            if (b % 2 == 0)
            {
                a += b / 2;
                b /= 2;
            }
            else
            {
                a += (b - 1) / 2;
                b = (b - 1) / 2;
            }
        }
    }
    cout << a << ' ' << b << endl;
}
