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
    string s;
    int n;
    cin >> s >> n;
    int l, r;
    string tmp;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        tmp = s.substr(l - 1, r - l + 1);
        vrev(tmp);
//        cout << tmp << endl;
        s = s.substr(0, l - 1 - 1 + 1) + tmp + s.substr(r - 1 + 1, s.length()-r-1+1);
//        cout << s << endl;
    }
    cout << s << endl;
}
