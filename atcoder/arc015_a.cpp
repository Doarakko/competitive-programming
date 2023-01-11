#include <iostream>
#include <iomanip>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    double n, ans;
    cin >> n;
    ans = (9.0 / 5 * n) + 32;
    cout << setprecision(-6) << ans << endl;
}
