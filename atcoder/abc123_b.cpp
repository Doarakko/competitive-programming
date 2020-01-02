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
    vector<P<int, int>> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i].Y;
        if (v[i].Y % 10 == 0)
        {
            v[i].X = 0;
        }
        else
        {
            v[i].X = 10 - v[i].Y % 10;
        }
    }
    vsort(v);
    int ans = v[0].Y, pre = v[0].X;
    for (int i = 1; i < 5; i++)
    {
        ans += v[i].Y + pre;
        pre = v[i].X;
    }
    cout << ans << endl;
}
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
    vector<P<int, int>> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i].Y;
        if (v[i].Y % 10 == 0)
        {
            v[i].X = 0;
        }
        else
        {
            v[i].X = 10 - v[i].Y % 10;
        }
    }
    vsort(v);
    int ans = v[0].Y, pre = v[0].X;
    for (int i = 1; i < 5; i++)
    {
        ans += v[i].Y + pre;
        pre = v[i].X;
    }
    cout << ans << endl;
}
提出情報