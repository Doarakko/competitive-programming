#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
    int n;

    char c;
    vector<char> card;

    pair<int, char> p;
    vector<pair<int, char>> v;

    bool exist, flag;
    int num;

    while (cin >> n, n)
    {
        // 初期化
        flag = false;
        num = -1;
        card.clear();
        v.clear();

        // 入力
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            card.push_back(c);
        }

        // 開票
        for (int i = 0; i < n; i++)
        {
            // 初期化
            exist = false;

            for (int j = 0; j < v.size(); j++)
            {
                // 存在する場合
                if (card[i] == v[j].second)
                {
                    exist = true;
                    v[j].first++;
                }
            }
            // 存在しない場合
            if (!exist)
            {
                p.first = 1;
                p.second = card[i];
                v.push_back(p);
            }
            // 昇順ソート
            sort(v.begin(), v.end());

            if (v.size() == 1)
            {
                // 1位確定の場合
                if (v[v.size() - 1].first > n - (i + 1))
                {
                    flag = true;
                    num = i + 1;
                    break;
                }
            }
            else
            {
                // 1位確定の場合（2位に残りの票数を足した枚数より大きい場合）
                if (v[v.size() - 1].first > v[v.size() - 2].first + n - (i + 1))
                {
                    flag = true;
                    num = i + 1;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << v[v.size() - 1].second << ' ' << num << endl;
        }
        else
        {
            cout << "TIE" << endl;
        }
    }

    return 0;
}
