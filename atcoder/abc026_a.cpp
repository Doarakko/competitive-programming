#include <iostream>

using ll = long long;
using namespace std;
int main(int argc, const char *argv[])
{
    int a, ans = 0;
    cin >> a;
    for (int i = 1; i < a; i++)
    {
        ans = max(ans, i * (a - i));
    }
    cout << ans << endl;
}
