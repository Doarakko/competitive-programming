#include <iostream>

using namespace std;
using ll = long long;

// 最大公約数
int gcd(int x, int y)
{
    int r;

    // 引数チェック
    if (x == 0 || y == 0)
    {
        return 0;
    }

    // ユーグリッドの互除法
    // yで割り切れるまでループ
    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return y;
}

int main(int argc, const char *argv[])
{
    int w, h;
    cin >> w >> h;
    int g = gcd(w, h);
    if (w / g == 4)
    {
        cout << "4:3" << endl;
    }
    else
    {
        cout << "16:9" << endl;
    }
}
