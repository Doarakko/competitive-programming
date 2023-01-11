#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    long long n;

    long long x;
    vector<long long> a, b;

    // 入力
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    // 出力
    if (a.size() == 1)
    { // サイズが1の場合
        cout << a[0] << endl;
    }
    else if (a.size() % 2 == 0)
    { // サイズが偶数の場合
        // 偶数番目を逆順出力
        for (long long i = n - 1; i >= 0; i -= 2)
        {
            cout << a[i] << ' ';
        }
        // 奇数番目を逆順出力
        for (long long i = 0; i < n; i += 2)
        {
            cout << a[i];
            if (i < n - 1 - 1)
            {
                cout << ' ';
            }
            else
            {
                cout << endl;
            }
        }
    }
    else
    { // サイズが奇数の場合
        // 偶数番目を逆順出力
        for (long long i = n - 1; i >= 0; i -= 2)
        {
            cout << a[i] << ' ';
        }
        // 奇数番目を逆順出力
        for (long long i = 1; i < n; i += 2)
        {
            cout << a[i];
            if (i < n - 1 - 1)
            {
                cout << ' ';
            }
            else
            {
                cout << endl;
            }
        }
    }

    return 0;
}
