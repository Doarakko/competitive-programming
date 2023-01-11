#include <iostream>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;
    if (a + b < 24)
    {
        cout << a + b << endl;
    }
    else
    {
        cout << a + b - 24 << endl;
    }
    return 0;
}
