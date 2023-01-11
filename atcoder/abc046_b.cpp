#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, k;
    cin >> n >> k;
    ll ans = k;
    for (int i = 1; i < n; i++)
    {
        ans *= k - 1;
    }
    cout << ans << endl;
}
