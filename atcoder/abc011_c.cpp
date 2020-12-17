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

// 2進数変換
// string s = bitset<20>(x).to_string();

using namespace std;
using ll = long long;

bool check(int x, vector<int> ng)
{
    if (x < 0)
    {
        return false;
    }
    for (int i = 0; i < 3; i++)
    {
        if (x == ng[i])
        {
            return false;
        }
    }
    return true;
}

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<int> ng(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> ng[i];
    }
    if (!check(n, ng))
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < 100 && n > 0; i++)
    {
        if (check(n - 3, ng))
        {
            n -= 3;
        }
        else if (check(n - 2, ng))
        {
            n -= 2;
        }
        else if (check(n - 1, ng))
        {
            n -= 1;
        }
        else
        {
            break;
        }
        //cout << "n: " << n << endl;
    }
    if (n == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
