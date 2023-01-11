#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, x;
    cin >> n >> x;
    if (n - x > x - 1)
    {
        cout << x - 1 << endl;
    }
    else
    {
        cout << n - x << endl;
    }
}
