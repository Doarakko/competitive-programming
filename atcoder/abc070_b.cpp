#include <iostream>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = -1;
    if (a > c)
    {
        if (a > d)
        {
            ans = 0;
        }
        else
        {
            if (d > b)
            {
                ans = b - a;
            }
            else
            {
                ans = d - a;
            }
        }
    }
    else
    {
        if (c > b)
        {
            ans = 0;
        }
        else
        {
            if (b > d)
            {
                ans = d - c;
            }
            else
            {
                ans = b - c;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
