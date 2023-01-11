#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    ll a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << a * b << endl;
    }
}
