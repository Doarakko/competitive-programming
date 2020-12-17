#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>
#include <bitset>

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

// 2進数変換
// string s = bitset<20>(x).to_string();

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<P<ll, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].X >> v[i].Y;
    }
    vsort(v);

    ll sum = 0;
    int cnt = 0;
    for (int i = 0; i < n && cnt < m; i++)
    {
        sum += v[i].X * min(v[i].Y, m - cnt);
        cnt += min(v[i].Y, m - cnt);
    }
    cout << sum << endl;
}
