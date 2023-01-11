#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, a, b, ans = 0;
    cin >> n >> a >> b;
    if (n > 5)
    {
        ans = b * 5 + a * (n - 5);
    }
    else
    {
        ans = b * n;
    }
    cout << ans << endl;
}
