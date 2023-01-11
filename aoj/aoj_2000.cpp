#include <iostream>
using namespace std;

int main()
{
    int n, m, x, y, l;
    char d;
    int r_x, r_y, cnt;

    while (cin >> n, n)
    {
        int maze[21][21] = {};
        // 初期化
        r_x = 10;
        r_y = 10;
        cnt = 0;
        // 入力
        // 宝石の位置
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            maze[y][x] = 1;
        }
        // 入力
        cin >> m;
        // 命令
        for (int i = 0; i < m; i++)
        {
            cin >> d >> l;
            if (d == 'N')
            { // 北
                for (int j = 1; j <= l; j++)
                {
                    if (maze[r_y + j][r_x] == 1)
                    {
                        maze[r_y + j][r_x] = 0;
                        cnt++;
                    }
                }
                r_y += l;
            }
            else if (d == 'E')
            { // 東
                for (int j = 1; j <= l; j++)
                {
                    // 宝石回収
                    if (maze[r_y][r_x + j] == 1)
                    {
                        maze[r_y][r_x + j] = 0;
                        cnt++;
                    }
                }
                r_x += l;
            }
            else if (d == 'S')
            { // 南
                for (int j = 1; j <= l; j++)
                {
                    // 宝石回収
                    if (maze[r_y - j][r_x] == 1)
                    {
                        maze[r_y - j][r_x] = 0;
                        cnt++;
                    }
                }
                r_y -= l;
            }
            else if (d == 'W')
            { // 西
                for (int j = 1; j <= l; j++)
                {
                    // 宝石回収
                    if (maze[r_y][r_x - j] == 1)
                    {
                        maze[r_y][r_x - j] = 0;
                        cnt++;
                    }
                }
                r_x -= l;
            }
        }
        // 出力
        if (n == cnt)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
