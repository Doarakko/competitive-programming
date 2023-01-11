#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    long long n, k;
    long long a, b;
    pair<long long, long long> p;
    vector<pair<long long, long long>> v;
    long long cnt, ans;

    // 入力
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        p.first = a;
        p.second = b;
        v.push_back(p);
    }
    // 昇順にソート
    sort(v.begin(), v.end());

    // カウント
    // 初期化
    cnt = 0;
    for (int i = 0;; i++)
    {
        cnt += v[i].second;
        // k番目の場合
        if (cnt >= k)
        {
            ans = v[i].first;
            break;
        }
    }
    // 出力
    cout << ans << endl;

    return 0;
}
