#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, r;
    int p, c;
    vector<int> v, bottom, top;

    while (cin >> n >> r, n || r)
    {
        // 初期化
        v.clear();
        for (int i = 0; i < n; i++)
        {
            v.push_back(i + 1);
        }

        // シャッフル
        for (int i = 0; i < r; i++)
        {
            // 初期化
            bottom.clear();
            top.clear();
            cin >> p >> c;

            // c保存
            for (int j = 0; j < c; j++)
            {
                bottom.push_back(v[n - (c + p - 1) + j]);
            }

            // p-1保存
            for (int j = 0; j < p - 1; j++)
            {
                top.push_back(v[n - (p - 1) + j]);
            }

            // p-1移動
            for (int j = 0; j < p - 1; j++)
            {
                v[n - (c + p - 1) + j] = top[j];
            }

            // c移動
            for (int j = 0; j < c; j++)
            {
                v[n - c + j] = bottom[j];
            }
        }
        cout << v[n - 1] << endl;
    }

    return 0;
}
