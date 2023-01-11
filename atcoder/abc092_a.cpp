#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b, c, d, sum = 0;
    cin >> a >> b >> c >> d;
    if (a > b)
    {
        sum += b;
    }
    else
    {
        sum += a;
    }
    if (c > d)
    {
        sum += d;
    }
    else
    {
        sum += c;
    }
    cout << sum << endl;
    return 0;
}
