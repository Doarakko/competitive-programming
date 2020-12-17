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
    string s, S = "keyence";
    cin >> s;
    
    string tmp;
    bool flag = false;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; i+j < s.length(); j++) {
            tmp = s.substr(0, i) + s.substr(i+j, s.length()-(i+j));
            // cout << tmp << endl;
            if (tmp == S) {
                flag = true;
            }
        }
    }
    if (flag) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
