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
    int t, n, m;
    vector<int> a(n);

    cin >> t >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int idx = 0;
    bool flag;
    for (int i = 0; i < m; i++)
    {
        flag = false;
        for (int j = idx; j < n; j++)
        {

            if (b[i] - a[j] <= t && b[i] - a[j] >= 0)
            {
                idx++;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    if (flag)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
