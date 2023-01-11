#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    int sum, max, min, min_sum;
    vector<int> v;

    // 初期化
    max = 0;

    // 入力
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // 入力
        cin >> x;
        // 初期化
        if (i == 0)
        {
            min = x;
        }
        if (x > max)
        { // 最大値更新
            max = x;
        }
        else if (x < min)
        { // 最小値更新
            min = x;
        }
        v.push_back(x);
    }

    if (min > 0)
    {
        min = 0;
    }
    for (int i = min; i <= max; i++)
    {
        // 初期化
        sum = 0;
        // コストの和を計算
        for (int j = 0; j < n; j++)
        {
            sum += ((v[j] - i) * (v[j] - i));
        }
        if (i == min)
        { // 初期化
            min_sum = sum;
        }
        else if (min_sum > sum)
        { // 最小コスト更新
            min_sum = sum;
        }
    }
    // 出力
    cout << min_sum << endl;
}
