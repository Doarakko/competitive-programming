#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << n - k << endl;
    }
}
