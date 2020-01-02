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
    int n;
    cin >> n;
    vector<int> v(n + 1), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == i + 1)
        {
            ans.push_back(v[i]);
            v.erase(v.begin() + i);
            i = v.size() - 1;
        }
    }
    vrev(ans);
    if (ans.size() == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}
