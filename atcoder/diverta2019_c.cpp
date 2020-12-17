#include <iostream>
#include <iomanip>
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
#define vmax_p(v) max_element(v.begin(), v.end())
#define vmin_p(v) min_element(v.begin(), v.end())
#define vmax_idx(v) distance(v.begin(), vmax_p(v))
#define vmin_idx(v) distance(v.begin(), vmin_p(v))
#define vcopy(src, dst) copy(src.begin(), src.end(), back_inserter(dst))
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

// floor(x): truncate

// 2進数変換
// string s = bitset<20>(x).to_string();

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a = 0, b = 0, ab = 0, cnt = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == 'B' && s[s.length() - 1] == 'A')
        {
            ab++;
        }
        else if (s[0] == 'B')
        {
            b++;
        }
        else if (s[s.length() - 1] == 'A')
        {
            a++;
        }
        if (s.find("AB") != -1)
        {
            for (int j = 0; j < s.length() - 1; j++)
            {
                string x, y;
                x = s[j];
                y = s[j + 1];
                if (x + y == "AB")
                {
                    cnt++;
                }
            }
        }
    }
    //cout << "cnt:" << cnt << " a:" << a << " b:" << b << endl;
    if (ab >= 2)
    {
        cnt += ab - 1;
    }
    if (ab > 0 && a > 0)
    {
        a--;
        cnt++;
    }
    if (ab > 0 && b > 0)
    {
        b--;
        cnt++;
    }
    cnt += min(a, b);
    cout << cnt << endl;
}
