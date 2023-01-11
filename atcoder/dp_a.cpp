#include <iostream>
#include <vector>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int dp[n];
    dp[0] = 0;
    dp[1] = abs(v[0] - v[1]);

    int a, b;
    for (int i = 2; i < n; i++)
    {
        a = dp[i - 1] + abs(v[i] - v[i - 1]);
        b = dp[i - 2] + abs(v[i] - v[i - 2]);
        if (a < b)
        {
            dp[i] = a;
        }
        else
        {
            dp[i] = b;
        }
    }
    //    for (int i = 0; i < n; i++) {
    //        cout << dp[i] << " ";
    //    }
    //    cout << endl;
    cout << dp[n - 1] << endl;
}
