#include <iostream>

#include <algorithm>
using namespace std;

int main(int argc, const char *argv[])
{
    int n, l;
    string s;
    vector<string> v;

    // 入力
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    // 昇順ソート
    sort(v.begin(), v.end());

    // 辞書順に出力
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    cout << endl;

    return 0;
}
