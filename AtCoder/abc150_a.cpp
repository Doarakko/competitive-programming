#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll k, x;
    cin >> k >> x;

    if (k * 500 >= x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}