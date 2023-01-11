#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, k;
    cin >> n >> k;
    if (n % k >= 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << n % k << endl;
    }
}
