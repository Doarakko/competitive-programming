#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    int ans = 0, cnt;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cnt = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    cnt++;
                }
            }
            if (cnt == 8)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
