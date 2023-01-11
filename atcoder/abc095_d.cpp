#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll N, C, x, v;
    cin >> N >> C;
    vector<ll> X(N), V(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x >> v;
        X[i] = x;
        V[i] = v;
    }

    ll dp[N][N], max = -1, d = 0;
    for (int i = 0; i < N; i++)
    {
        dp[0][i] = V[i] - (abs(X[i] - d));
        if (max < dp[0][i])
        {
            max = dp[0][i];
        }
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dp[i][0] = V[i] - (abs(X[i] - d));
        }
    }
    return 0;
}
