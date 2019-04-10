#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>

#define X first
#define Y second
#define vsort(v) sort(v.begin(), v.end())
#define vrev(v) reverse(v.begin(), v.end())
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

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;

    if (n * 4 < m || n * 2 > m)
    {
        cout << "-1 -1 -1" << endl;
        return 0;
    }

    // 老人2 = 大人1 + 赤ちゃん1
    // 老人 = 0 or 1
    for (int i = 0; i <= 1; i++)
    {

        for (int j = 0; j <= n - i; j++)
        {
            int sum = j * 2 + i * 3 + (n - (i + j)) * 4;
            if (sum == m)
            {
                // 大人: j, 老人: i, 赤ちゃん: n - (i + j)
                cout << j << ' ' << i << ' ' << n - (i + j) << endl;
                return 0;
            }
            // cout << j << ' ' << i << ' ' << cnt - j << endl;
        }
    }
    cout << "-1 -1 -1" << endl;
}
