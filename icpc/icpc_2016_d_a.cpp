#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int n;
    int x;
    vector<int> a;

    int abs;

    while (cin >> n, n)
    {
        // 初期化
        a.clear();

        // 入力
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        // 昇順ソート
        sort(a.begin(), a.end());
        abs = a[1] - a[0];
        for (int i = 1; i < n; i++)
        {
            // 最小値の更新
            if (abs > a[i] - a[i - 1])
            {
                abs = a[i] - a[i - 1];
            }
        }
        // 出力
        cout << abs << endl;
    }

    return 0;
}
