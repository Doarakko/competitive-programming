#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
    string s, tmp;
    int n, cnt;
    vector<string> v;
    string s1, s2, s3;

    // 初期化
    cnt = 0;
    v.clear();

    // 入力
    cin >> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }

    // 探索
    for (int i = 0; i < n; i++)
    {
        if (v[i].find(s) != -1)
        { // 探したい文字列がある場合
            cnt++;
        }
        else
        {
            s3 = v[i];
            for (int j = 0; j < s.size(); j++)
            {
                // 初期化
                s1.clear();
                s2.clear();

                // 1文字ずつ後ろに回す
                s1 = s3.substr(0, 1);
                s2 = s3.substr(1, s3.size() - 1);
                s3 = s2 + s1;

                // 探したい文字列がある場合
                if (s3.find(s) != -1)
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    // 出力
    cout << cnt << endl;
}
