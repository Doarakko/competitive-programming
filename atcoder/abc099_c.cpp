#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    int a[12] = {1, 6, 9, 36, 81, 216, 729, 1296, 6561, 7776, 46656, 59049};

    int dp[n + 4];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (i >= a[j])
            {
                if (dp[i] != 0)
                {
                    if (dp[i - a[j]] + 1 > dp[i - 1] + 1 && dp[i - 1] + 1 < dp[i])
                    {
                        dp[i] = dp[i - 1] + 1;
                    }
                    else if (dp[i - a[j]] + 1 <= dp[i - 1] + 1 && dp[i - a[j]] + 1 < dp[i])
                    {
                        dp[i] = dp[i - a[j]] + 1;
                    }
                }
                else
                {
                    if (dp[i - a[j]] + 1 > dp[i - 1] + 1)
                    {
                        dp[i] = dp[i - 1] + 1;
                    }
                    else
                    {
                        dp[i] = dp[i - a[j]] + 1;
                    }
                }
            }
            else
            {
                break;
            }
        }
    }
    /*
    for (int i = 0; i <= n; i++) {
        cout << i << ": " << dp[i] << endl;
    }
     */
    cout << dp[n] << endl;

    return 0;
}
