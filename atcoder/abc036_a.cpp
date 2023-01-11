#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;
    if (b % a == 0)
    {
        cout << b / a << endl;
    }
    else
    {
        cout << b / a + 1 << endl;
    }
}
