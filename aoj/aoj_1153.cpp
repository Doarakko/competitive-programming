#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char *argv[])
{
    int n, m;
    int x;
    vector<int> taro, hanako;
    int taro_sum, hanako_sum;
    bool flag;
    pair<int, int> p;
    int sum;

    while (cin >> n >> m, n || m)
    {
        // 初期化
        taro.clear();
        hanako.clear();
        taro_sum = 0;
        hanako_sum = 0;
        flag = false;
        sum = 201;

        // 太郎の手札
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            taro.push_back(x);
            taro_sum += x;
        }
        sort(taro.begin(), taro.end());

        // 花子の手札
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            hanako.push_back(x);
            hanako_sum += x;
        }
        sort(hanako.begin(), hanako.end());

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // 合計が等しくなった場合
                if (taro_sum - taro[i] + hanako[j] == hanako_sum - hanako[j] + taro[i])
                {
                    flag = true;
                    // 交換する手札の合計の更新
                    if (sum > p.first + p.second)
                    {
                        p.first = taro[i];
                        p.second = hanako[j];
                        sum = p.first + p.second;
                    }
                }
            }
        }

        // 出力
        if (flag == true)
        {
            cout << p.first << " " << p.second << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
