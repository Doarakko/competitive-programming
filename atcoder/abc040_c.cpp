#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = x;
    }
    int dp[n], tmp;
    for (int i = 0; i < n; i++)
    {
        dp[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            tmp = abs(a[i] - a[i + 1]);
            if (dp[i + 1] == 0)
            {
                dp[i + 1] = dp[i] + tmp;
            }
            else if (dp[i + 1] > dp[i] + tmp)
            {
                dp[i + 1] = dp[i] + tmp;
            }
        }
        if (i + 2 < n)
        {
            tmp = abs(a[i] - a[i + 2]);
            if (dp[i + 2] == 0)
            {
                dp[i + 2] = dp[i] + tmp;
            }
            else if (dp[i + 2] > dp[i] + tmp)
            {
                dp[i + 2] = dp[i] + tmp;
            }
        }
        //        for (int i = 0; i < n; i++) {
        //            cout << dp[i] << ' ';
        //        }
        //        cout << endl;
    }
    cout << dp[n - 1] << endl;
    return 0;
}
