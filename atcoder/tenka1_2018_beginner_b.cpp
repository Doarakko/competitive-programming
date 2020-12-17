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
    ll a, b;
    int k;
    cin >> a >> b >> k;
    for (int i = 0; i < k; i++) {
        if (i % 2 == 0) {
            if (a % 2 == 0) {
                b += a / 2;
                a /= 2;
            }else{
                b += (a - 1) / 2;
                a = (a - 1) / 2; 
            }
        }else{
            if (b % 2 == 0) {
                a += b / 2;
                b /= 2;
            }else{
                a += (b - 1) / 2;
                b = (b - 1) / 2; 
            }
        }
    }
    cout << a << ' ' << b << endl;
}
