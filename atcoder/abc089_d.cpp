#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, const char *argv[])
{
    int H, W, D;
    cin >> H >> W >> D;
    int a[H][W], x;

    vector<pair<int, int>> v(300 * 300 + 1);
    pair<int, int> p;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> x;
            a[i][j] = x;
            p.first = i;
            p.second = j;
            v[x] = p;
        }
    }
    int Q;
    cin >> Q;
    int L[Q], R[Q], l, r;
    for (int i = 0; i < Q; i++)
    {
        cin >> l >> r;
        L[i] = l;
        R[i] = r;

        int cost = 0, x = -1, y = -1;
        bool flag = false;
        while (!flag)
        {
            if (x != -1)
            {
                cost += (abs(y - v[L[i]].first) + abs(x - v[L[i]].second));
            }
            if (a[v[L[i]].first][v[L[i]].second] == R[i])
            {
                flag = true;
            }
            else
            {
                y = v[L[i]].first;
                x = v[L[i]].second;
                L[i] = a[v[L[i]].first][v[L[i]].second] + D;
                // cout << y << " " << x << endl;
            }
        }
        cout << cost << endl;
    }
    /*
    for (int i = 0; i < Q; i++) {
        int cost = 0, x = -1, y = -1;
        bool flag = false;
        while (!flag) {
            if (x != -1) {
                cost += (abs(y-v[L[i]].first) + abs(x-v[L[i]].second));
            }
            if (a[v[L[i]].first][v[L[i]].second] == R[i]) {
                flag = true;
            }else{
                y = v[L[i]].first;
                x = v[L[i]].second;
                L[i] = a[v[L[i]].first][v[L[i]].second] + D;
                //cout << y << " " << x << endl;
            }
        }
        cout << cost << endl;
    }
    */
    return 0;
}
