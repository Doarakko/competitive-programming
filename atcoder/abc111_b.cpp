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
    if (n / 100 * 100 + n / 100 * 10 + n / 100 >= n) {
        cout << n / 100 * 100 + n / 100 * 10 + n / 100 << endl;
    }else{
        cout << (n / 100 + 1) * 100 + (n / 100 + 1) * 10 + (n / 100 + 1) << endl;
    }
}
