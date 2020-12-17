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


//INT_MAX
//INT_MIN
//LLONG_MAX
//LLONG_MIN
//DBL_MIN
//DBL_MAX
//LDBL_MIN
//LDBL_MAX

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    ll x, a;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> a;
        v[i] = a;
    }
    vsort(v);
    int cnt = 0;
    for (int i = 0; i < n && x > 0; i++) {
        if (i == n - 1) {
            if (v[i] == x) {
                cnt++;
                x -= v[i];
            }
        }else{
            if (v[i] <= x) {
                cnt++;
                x -= v[i];
            }
        }
    }
    cout << cnt << endl;
}
