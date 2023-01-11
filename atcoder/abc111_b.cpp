#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    if (n / 100 * 100 + n / 100 * 10 + n / 100 >= n)
    {
        cout << n / 100 * 100 + n / 100 * 10 + n / 100 << endl;
    }
    else
    {
        cout << (n / 100 + 1) * 100 + (n / 100 + 1) * 10 + (n / 100 + 1) << endl;
    }
}
