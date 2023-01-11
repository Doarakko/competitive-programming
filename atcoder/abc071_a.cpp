#include <iostream>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int x, a, b;
    cin >> x >> a >> b;
    if (abs(x - a) > abs(x - b))
    {
        cout << 'B' << endl;
    }
    else
    {
        cout << 'A' << endl;
    }
    return 0;
}
