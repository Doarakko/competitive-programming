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

int main(int argc, const char *argv[]){
    int n, t, a, h;
    cin >> n >> t >> a;
    int ans = -1;
    double dis = -1;
    for (int i = 0; i < n; i++){
        cin >> h;
        if (i == 0){
            ans = 1;
            dis = abs(a - (t - h * 0.006));
        }
        else if (dis > abs(a - (t - h * 0.006))){
            ans = i + 1;
            dis = abs(a - (t - h * 0.006));
        }
    }
    cout << ans << endl;
}
