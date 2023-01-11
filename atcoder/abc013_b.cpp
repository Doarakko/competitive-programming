#include <iostream>

using namespace std;
int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;

    int ans;
    ans = abs(b - a);
    if (b > a)
    {
        ans = min(ans, a + abs(b - 9) + 1);
    }
    else
    {
        ans = min(ans, abs(a - 9) + 1 + b);
    }
    cout << ans << endl;
}
