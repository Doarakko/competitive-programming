#include <iostream>
#include <vector>

using namespace std;

int startPoint_search();
void countTile(int y, int x);
void display();

vector<string> v;
int w, h;
int cnt;
//(y,x)
pair<int, int> p;

int main(int argc, const char *argv[])
{
    string s;

    while (cin >> w >> h, w || h)
    {
        // 初期化
        v.clear();
        cnt = 0;

        // 入力
        for (int i = 0; i < h; i++)
        {
            cin >> s;
            v.push_back(s);
        }
        // スタート地点探索
        startPoint_search();
        // タイルカウント
        countTile(p.first, p.second);
        // 出力
        cout << cnt << endl;
    }

    return 0;
}

// スタート地点探索
int startPoint_search()
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (v[i][j] == '@')
            {
                p.first = i;
                p.second = j;
                return 1;
            }
        }
    }
    return -1;
}

// タイルカウント
// 深さ優先
// 上下左右
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int c_x, c_y;
void countTile(int y, int x)
{
    // display();
    cnt++;
    v[y][x] = '#';

    for (int i = 0; i < 4; i++)
    {
        c_y = y + dy[i];
        c_x = x + dx[i];
        // 範囲内かつ移動可能な場合
        // 番兵に変更するべき
        if (c_y >= 0 && c_y <= h && c_x >= 0 && c_x <= w && v[c_y][c_x] == '.')
        {
            countTile(c_y, c_x);
        }
    }
}

void display()
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
