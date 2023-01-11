#include <iostream>
using namespace std;

static const int max_n = 300;
static const int inf = 1e9;

int main(int argc, const char *argv[])
{
    int n, m;
    int a, b, t;

    int cost[max_n][max_n];
    int max[max_n];

    int ans;

    // 初期化
    for (int i = 0; i < max_n; i++)
    {
        for (int j = 0; j < max_n; j++)
        {
            if (i == j)
            {
                cost[i][j] = 0;
            }
            else
            {
                cost[i][j] = inf;
            }
        }
        max[i] = 0;
    }
    ans = inf;

    // 入力
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> t;
        cost[a - 1][b - 1] = cost[b - 1][a - 1] = t;
    }

    // ワーシャルフロイド
    // 経由地点
    for (int k = 0; k < n; k++)
    {
        // 出発地点
        for (int i = 0; i < n; i++)
        {
            // 到着地点
            for (int j = 0; j < n; j++)
            {
                cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max[i] < cost[i][j])
            {
                max[i] = cost[i][j];
            }
        }
        // 最大値更新
        if (max[i] < ans)
        {
            ans = max[i];
        }
    }
    cout << ans << endl;

    return 0;
}
