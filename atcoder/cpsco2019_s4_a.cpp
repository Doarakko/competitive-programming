#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int l, x;
    cin >> l >> x;
    if (x / l % 2 == 0)
    {
        cout << x % l << endl;
    }
    else
    {
        cout << l - x % l << endl;
    }
}
