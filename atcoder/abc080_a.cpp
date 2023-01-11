#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a, b;
    cin >> n >> a >> b;
    if (n * a < b)
    {
        cout << n * a << endl;
    }
    else
    {
        cout << b << endl;
    }
    return 0;
}
