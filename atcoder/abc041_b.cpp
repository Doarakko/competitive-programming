#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll a, b, c;
    cin >> a >> b >> c;
    // (A × B) % M = {(A % M) × (B % M)} % M
    cout << (a * b) % (1000000000 + 7) * c % (1000000000 + 7) % (1000000000 + 7) << endl;
}
