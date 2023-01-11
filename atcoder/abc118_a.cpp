#include <iostream>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;
    if (b % a == 0)
    {
        cout << a + b << endl;
    }
    else
    {
        cout << b - a << endl;
    }
}
