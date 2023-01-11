#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '+')
    {
        cout << a + b << endl;
    }
    else
    {
        cout << a - b << endl;
    }
}
