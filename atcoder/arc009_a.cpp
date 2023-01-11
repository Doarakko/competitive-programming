#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, a, b, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ans += a * b;
    }
    ans *= 1.05;
    cout << ans << endl;
}
