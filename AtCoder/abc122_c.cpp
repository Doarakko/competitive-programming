#include <iostream>
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
    int n, q, l, r;
    string s;
    cin >> n >> q >> s;

    int a[n + 1] = {};
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == 'A' && s[i] == 'C')
        {
            a[i] = a[i - 1] + 1;
        }
        else
        {
            a[i] = a[i - 1];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }
    // cout << endl;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        cout << a[r - 1] - a[l - 1] << endl;
    }
}
