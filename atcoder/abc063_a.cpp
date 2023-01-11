#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll a, b;
    cin >> a >> b;
    if (a + b >= 10)
    {
        cout << "error" << endl;
    }
    else
    {
        cout << a + b << endl;
    }
}
