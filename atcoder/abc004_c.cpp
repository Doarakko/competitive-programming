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
    vector<int> v = {1, 2, 3, 4, 5, 6};
    ll n;
    cin >> n;
    n %= 30;
    for (ll i = 0; i < n; i++)
    {
        swap(v[i % 5], v[i % 5 + 1]);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << v[i];
    }
    cout << endl;
}
