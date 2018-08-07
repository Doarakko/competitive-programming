#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <climits>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

//LLONG_MAX
//LLONG_MIN
//INT_MAX
//INT_MIN
//DBL_MIN
//DBL_MAX
//LDBL_MIN
//LDBL_MAX

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    ll sx[n], sy[n], cx[m], cy[m];
    for (int i = 0; i < n; i++) {
        cin >> sx[i] >> sy[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> cx[i] >> cy[i];
    }
    ll d, min, min_num;
    for (int i = 0; i < n; i++) {
        min = LLONG_MAX;
        for (int j = 0; j < m; j++) {
            d = abs(sx[i] - cx[j]) + abs(sy[i] - cy[j]);
            if (min > d) {
                min = d;
                min_num = j;
            }
        }
        cout << min_num + 1 << endl;
    }
    return 0;
}
