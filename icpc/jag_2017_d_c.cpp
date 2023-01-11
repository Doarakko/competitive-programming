#include <iostream>
#include <vector>

using namespace std;
using P = pair<int, int>;

void display();

int N, M;
int s, k, c;

//(first, second) = (最大値, 最低値)
vector<P> v;

int mini, min_id;
int ans;

int main()
{
    while (cin >> N >> M, N || M)
    {
        // 初期化
        v.clear();
        ans = -1;
        mini = 1e9;
        for (int i = 0; i < N; i++)
        {
            v.push_back(P(0, 0));
        }

        for (int i = 0; i < M; i++)
        {
            // 入力
            cin >> s >> k;
            if (k == 1)
            { // cが確実に得点する場合
                cin >> c;
                // 最大値+
                v[c - 1].first += s;
                // 最低値+
                v[c - 1].second += s;
            }
            else
            { // 誰が得点するかわからない場合
                for (int j = 0; j < k; j++)
                {
                    cin >> c;
                    // 最大値+
                    v[c - 1].first += s;
                }
            }
        }
        // 昇順ソート
        sort(v.begin(), v.end());
        // 最下位候補を求める
        for (int i = 0; i < N - 1; i++)
        {
            // 最下位候補更新
            if (mini > v[i].second)
            {
                mini = v[i].second;
            }
        }
        // display();
        // 逆転に必要な点数の最小値 = 優勝候補 - 最下位候補 + 1
        ans = v[N - 1].first - mini + 1;
        // 出力
        cout << ans << endl;
    }
}

void display()
{
    for (int i = 0; i < N; i++)
    {
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}
