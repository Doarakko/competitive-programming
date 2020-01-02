#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>

#define X first
#define Y second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())
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

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    vsort(v);
    
    vector<int> diff(m-1);
    for (int i = 0; i < m - 1; i++) {
        diff[i] = abs(v[i] - v[i+1]);
    }
    vsort(diff);
    int sum = 0;
    for (int i = 0; i < m - n; i++) {
        sum += diff[i];
    }
    cout << sum << endl;
}
