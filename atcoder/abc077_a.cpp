#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string a, b;
    cin >> a >> b;
    vrev(b);
    if (a == b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
