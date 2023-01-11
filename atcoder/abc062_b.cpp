#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int h, w;
    string s;
    vector<string> v;

    // 入力
    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    // 出力
    // 1行目
    for (int i = 0; i < w + 2; i++)
    {
        cout << '#';
    }
    cout << endl;

    // 2 ~ h+1行目
    for (int i = 0; i < h; i++)
    {
        cout << '#';
        cout << v[i];
        cout << '#' << endl;
    }

    // h+2行目
    for (int i = 0; i < w + 2; i++)
    {
        cout << '#';
    }
    cout << endl;

    return 0;
}
