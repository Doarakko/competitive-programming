#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << (n + 1) * (n / 2) << endl;
    }
    else
    {
        cout << (n + 1) * (n / 2) + n / 2 + 1 << endl;
    }
}
