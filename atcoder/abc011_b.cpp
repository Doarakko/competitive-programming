#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>
#include <ctype.h>

#define X first
#define Y second
#define vsort(v) sort(v.begin(), v.end())
#define vrev(v) reverse(v.begin(), v.end())
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

// toupper
// tolower

using namespace std;
using ll = long long;

int main(int argc, const char *argv[]){
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (i == 0) {
            cout << (char)toupper(s[i]);
        }else{
            cout << (char)tolower(s[i]);
        }
    }
    cout << endl;
}
