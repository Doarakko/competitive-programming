#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a * b > c * d)
    {
        cout << a * b << endl;
    }
    else
    {
        cout << c * d << endl;
    }
}
