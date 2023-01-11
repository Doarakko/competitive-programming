#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;

    int x, y, ans = 0;

    x = n % 9;
    y = n / 9;
    if (x == 0)
    {
        x = 9;
        y--;
    }
    for (int i = 0; i <= y; i++)
    {
        ans += x * pow(10, i);
    }
    cout << ans << endl;
}
