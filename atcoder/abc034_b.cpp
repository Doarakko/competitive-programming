#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n - 1 << endl;
    }
    else
    {
        cout << n + 1 << endl;
    }
}
