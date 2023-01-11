#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, m, a, b, c, ans = -1;
    cin >> n >> m >> a >> b;
    for (int i = 0; i < m; i++)
    {
        if (n <= a)
        {
            n += b;
        }

        cin >> c;
        n -= c;
        if (n < 0 && ans == -1)
        {
            ans = i + 1;
        }
    }

    if (ans == -1)
    {
        cout << "complete" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
