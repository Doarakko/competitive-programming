#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b - a == c - b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
