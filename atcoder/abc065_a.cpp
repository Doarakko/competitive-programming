#include <iostream>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll x, a, b;
    cin >> x >> a >> b;
    if (b - a <= 0)
    {
        cout << "delicious" << endl;
    }
    else if (b - a <= x)
    {
        cout << "safe" << endl;
    }
    else
    {
        cout << "dangerous" << endl;
    }
    return 0;
}
