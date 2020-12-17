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

// A-Z: 65~90
// a-z: 97~122
// |a-z| = 26

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<int> x(n), y(n), h(n);
    int idx = -1;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> h[i];
        if (h[i] != 0) {
            idx = i;
        }
    }
    
    for (int px = 0; px <= 100; px++) {
        for (int py = 0; py <= 100; py++) {
            bool flag = true;
            int h_top = h[idx] + abs(px - x[idx]) + abs(py - y[idx]);
            
            for (int i = 0; i < n; i++) {
                if (h[i] != max(h_top - abs(px - x[i]) - abs(py - y[i]), 0)) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                cout << px << ' ' << py << ' ' << h_top << endl;
                return 0;
            }
        }
    }
    
}
