#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int h, w;
    cin >> h >> w;
    string s;
    vector<string> v(h);
    for (int i = 0; i < h; i++) {
        cin >> s;
        v[i] = s;
    }
    int dx[8] = {0, 0, 1, 1, 1, -1, -1, -1};
    int dy[8] = {1, -1, 0, -1, 1, 0, 1, -1};
    int x, y, cnt;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cnt = 0;
            if (v[i][j] != '#') {
                for (int k = 0; k < 8; k++) {
                    x = j + dx[k];
                    y = i + dy[k];
                    if (x >= 0 && x < w && y >= 0 && y < h) {
                        if (v[y][x] == '#') {
                            cnt++;
                        }
                    }
                }
                v[i][j] = cnt + '0';
            }
        }
    }
    for (int i = 0; i < h; i++) {
        cout << v[i] << endl;
    }
    return 0;
}
