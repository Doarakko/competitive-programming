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
    int n;
    cin >> n;
    
    vector<P<ll, int>> v(n);
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v[i].X = a + b;
        v[i].Y = a;
    }
    vsort(v);
    vrev(v);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans += v[i].Y;
        }else{
            ans -= v[i].X - v[i].Y;
        }
    }
    cout << ans << endl;
}
