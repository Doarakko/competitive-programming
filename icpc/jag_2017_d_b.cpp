#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long T, D, L;

    long long x;
    vector<long long> d, t;

    long long time;

    while (cin >> T >> D >> L, T || D || L)
    {
        // 初期化
        d.clear();
        t.clear();
        time = 0;

        // 入力
        for (int i = 0; i < T; i++)
        {
            cin >> x;
            d.push_back(x);
            t.push_back(-1);

            // 時間経過
            for (long long j = i - D; j <= i; j++)
            {
                if (j < 0)
                {
                    j = 0;
                }
                if (t[j] > 0)
                {
                    t[j]--;
                }
            }
            // 基準値より大きい場合
            if (d[i] >= L)
            {
                t[i] = D;
            }

            for (long long j = i - D; j <= i; j++)
            {
                if (j < 0)
                {
                    j = 0;
                }
                // 濡れている場合
                if (t[j] > 0)
                {
                    time++;
                    break;
                }
            }
        }
        // 出力
        if (time == 0)
        {
            cout << time << endl;
        }
        else
        {
            cout << time - 1 << endl;
        }
    }

    return 0;
}
