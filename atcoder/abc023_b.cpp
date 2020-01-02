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

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, ans = 0;
    string s1, s2 = "b";
    cin >> n >> s1;
    for (int i = 1; s2.length() < s1.length(); i++)
    {
        if (i % 3 == 1)
        {
            s2 = 'a' + s2 + 'c';
        }
        else if (i % 3 == 2)
        {
            s2 = 'c' + s2 + 'a';
        }
        else
        {
            s2 = 'b' + s2 + 'b';
        }
        ans = i;
    }
    if (s1 == s2)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
