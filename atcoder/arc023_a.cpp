#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int y, m, d;
    cin >> y >> m >> d;

    if (m == 1 || m == 2)
    {
        m += 12;
        y--;
    }

    int a, b;
    a = 365 * y + floor(y / 4.0) - floor(y / 100.0) + floor(y / 400.0) + floor(306 * (m + 1) / 10.0) + d - 429;
    b = 365 * 2014 + floor(2014 / 4.0) - floor(2014 / 100.0) + floor(2014 / 400.0) + floor(306 * (5 + 1) / 10.0) + 17 - 429;

    cout << b - a << endl;
}
