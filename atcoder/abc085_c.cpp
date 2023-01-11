#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int N;
    ll Y;
    cin >> N >> Y;
    int c[3] = {10000, 5000, 1000};
    bool flag = false;
    ll a[3] = {}, sum[3], n[3];
    a[0] = Y / c[0];
    if (a[0] > N)
    {
        a[0] = N;
    }
    for (ll i = a[0]; i >= 0 && !flag; i--)
    {
        sum[0] = i * c[0];
        n[0] = i;

        a[1] = (Y - sum[0]) / c[1];
        if (i + a[1] > N)
        {
            a[1] = N - i;
        }
        for (ll j = a[1]; j >= 0 && !flag; j--)
        {
            sum[1] = j * c[1];
            n[1] = j;

            a[2] = (Y - (sum[0] + sum[1])) / c[2];
            if (i + j + a[2] > N)
            {
                a[2] = N - (i + j);
            }
            for (ll k = a[2]; k >= 0 && !flag; k--)
            {
                sum[2] = k * c[2];
                n[2] = k;
                if (n[0] + n[1] + n[2] == N && sum[0] + sum[1] + sum[2] == Y)
                {
                    flag = true;
                }
            }
        }
    }
    if (flag)
    {
        cout << n[0] << ' ' << n[1] << ' ' << n[2] << endl;
    }
    else
    {
        cout << "-1 -1 -1" << endl;
    }
    return 0;
}
