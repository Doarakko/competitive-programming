#include <iostream>
using namespace std;

void display();

const int MAX_CITY = 10;
const int INF = 1e9;

int main()
{
    int n;
    int cost[MAX_CITY][MAX_CITY];
    int from, to, c;

    int sum[MAX_CITY];
    int num_min, cost_min;

    int num_max;

    while (cin >> n, n != 0)
    {
        // 初期化
        for (int i = 0; i < MAX_CITY; i++)
        {
            for (int j = 0; j < MAX_CITY; j++)
            {
                cost[i][j] = INF;
            }
        }
        for (int i = 0; i < MAX_CITY; i++)
        {
            sum[i] = 0;
        }
        num_max = 0;
        num_min = -1;
        cost_min = INF;

        // 入力
        for (int i = 0; i < n; i++)
        {
            cin >> from >> to >> c;
            num_max = max(num_max, max(from, to));
            cost[from][to] = cost[to][from] = c;
        }

        // ワーシャルフロイド
        //  終了頂点
        for (int k = 0; k <= num_max; k++)
        {
            // 経由頂点
            for (int i = 0; i <= num_max; i++)
            {
                // 開始頂点
                for (int j = 0; j <= num_max; j++)
                {
                    cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
                }
            }
        }

        for (int i = 0; i <= num_max; i++)
        {
            // 各頂点の通勤時間の総和を計算
            for (int j = 0; j <= num_max; j++)
            {
                if (i != j)
                {
                    sum[i] += cost[i][j];
                }
            }
            // 通勤時間の総和の最小値更新
            if (sum[i] < cost_min)
            {
                num_min = i;
                cost_min = sum[i];
            }
        }
        // 出力
        cout << num_min << ' ' << cost_min << endl;
    }
    return 0;
}
