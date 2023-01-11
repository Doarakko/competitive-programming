#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, ans = 0;
    cin >> n;
    ans += n / 10 * 100;

    if (n % 10 >= 7)
    {
        ans += 100;
    }
    else
    {
        ans += 15 * (n % 10);
    }
    cout << ans << endl;
}
