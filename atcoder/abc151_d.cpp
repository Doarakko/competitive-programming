#include <iostream>
#include <vector>
#include <queue>
#define P pair
#define X first
#define Y second

using namespace std;

int dist[21][21] = {};
char OK = '.', NG = '#';

void display_vec(vector<string> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
}

int bfs(vector<string> v, P<int, int> s_p)
{
    // 上下左右
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    int h = v.size(), w = v[0].size();
    vector<vector<int>> dist(h, vector<int>(w, -1));

    queue<P<int, int>> q;
    // cur_p: 現在地
    // next_p: 移動予定地
    P<int, int> cur_p, next_p;

    // set start point
    q.push(s_p);
    dist[s_p.Y][s_p.X] = 0;

    int res = -1;

    while (q.size())
    {

        // display_vec(v);
        // display_dis();

        cur_p = q.front();
        v[cur_p.Y][cur_p.X] = NG;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            next_p.Y = cur_p.Y + dy[i];
            next_p.X = cur_p.X + dx[i];

            if (next_p.Y >= 0 && next_p.Y < h && next_p.X >= 0 && next_p.X < w)
            {
                if (v[next_p.Y][next_p.X] == OK && dist[next_p.Y][next_p.X] == -1)
                {
                    dist[next_p.Y][next_p.X] = dist[cur_p.Y][cur_p.X] + 1;
                    q.push(next_p);
                    res = max(res, dist[next_p.Y][next_p.X]);
                }
            }
        }
    }
    return res;
}

int main(int argc, const char *argv[])
{
    int h, w;
    cin >> h >> w;

    vector<string> v;
    string s;
    for (int i = 0; i < h; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    int ans = 0;
    P<int, int> s_p;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            s_p.Y = i;
            s_p.X = j;
            if (v[i][j] == OK)
            {
                ans = max(ans, bfs(v, s_p));
            }
        }
    }
    cout << ans << endl;
}