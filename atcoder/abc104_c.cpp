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
    int d, g;
    cin >> d >> g;
    int x, y;
    int p[d+1];
    ll c[d+1];
    p[0] = 0;
    c[0] = 0;
    for (int i = 1; i <= d; i++) {
        cin >> x >> y;
        p[i] = x;
        c[i] = y / 100;
    }
    int dp[d+1][g/100+1];
    for (int i = 0; i < g / 100 + 1; i++) {
        dp[0][i] = 0;
    }
    int num[3];
    for (int i = 0; i < d + 1; i++) {
        for (int j = 0; j < g / 100 + 1; j++) {
            if (j == 0) {
                dp[i][j] = 0;
            }else{
                num[0] = j / i;
                num[1] = dp[i][j-1] + 1;

            }
        }
    }
    return 0;
}
