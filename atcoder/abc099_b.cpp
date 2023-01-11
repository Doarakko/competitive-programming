#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b, x = 0;
    cin >> a >> b;

    for (int i = 1; i <= b - a; i++)
    {
        x += i;
    }
    x -= b;
    cout << x << endl;
    return 0;
}
