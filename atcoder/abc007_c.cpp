#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>
#include <bitset>

#define X first
#define Y second
#define vsort(v) sort(v.begin(), v.end())
#define vrev(v) reverse(v.begin(), v.end())
#define vmax_p(v) max_element(v.begin(), v.end())
#define vmin_p(v) min_element(v.begin(), v.end())
#define vmax_idx(v) distance(v.begin(), vmax_p(v))
#define vmin_idx(v) distance(v.begin(), vmin_p(v))
#define P pair

// stoi(s): string to int
// stod(s): string to double

// INT_MAX
// INT_MIN
// LLONG_MAX
// LLONG_MIN
// DBL_MIN
// DBL_MAX
// LDBL_MIN
// LDBL_MAX

// A-Z: 65~90
// a-z: 97~122
// |a-z| = 26

// 2進数変換
// string s = bitset<20>(x).to_string();

using namespace std;
using ll = long long;

int d[50][50] = {};
int H, W;
char OK = '.', NG = '#';
vector<string> v;
P<int, int> s_p, e_p;

void display_vec()
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
}

void display_dis()
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cout << d[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

void init_dis()
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            d[i][j] = -1;
        }
    }
}

void bfs()
{
    // 上下左右
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    queue<P<int, int>> q;

    init_dis();

    //c_p: 現在地
    //n_p: 移動予定地
    P<int, int> cur_p, next_p;

    // set start point
    q.push(s_p);
    d[s_p.Y][s_p.X] = 0;

    while (q.size())
    {
        //display_vec();
        //display_dis();

        cur_p = q.front();
        v[cur_p.Y][cur_p.X] = NG;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            next_p.Y = cur_p.Y + dy[i];
            next_p.X = cur_p.X + dx[i];

            if (next_p.Y >= 0 && next_p.Y < H && next_p.X >= 0 && next_p.X < W)
            {
                if (v[next_p.Y][next_p.X] == OK && d[next_p.Y][next_p.X] == -1)
                {
                    d[next_p.Y][next_p.X] = d[cur_p.Y][cur_p.X] + 1;
                    q.push(next_p);
                }
            }
        }
    }
}

int main(int argc, const char *argv[])
{
    cin >> H >> W;

    cin >> s_p.Y >> s_p.X;
    cin >> e_p.Y >> e_p.X;
    s_p.Y--;
    s_p.X--;
    e_p.Y--;
    e_p.X--;

    string s;
    for (int i = 0; i < H; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    bfs();
    cout << d[e_p.Y][e_p.X] << endl;
}
