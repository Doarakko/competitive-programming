#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    vector<int> v;
    int x;

    // 入力
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    // 昇順ソート
    sort(v.begin(), v.end());
    // 出力
    cout << v[0] + v[1] << endl;

    return 0;
}
