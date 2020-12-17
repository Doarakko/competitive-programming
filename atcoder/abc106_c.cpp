#include <iostream>
#include <string>
#include <vector>
#include <map>
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
    string s;
    ll k;
    cin >> s >> k;
    char ans = '1';
    for (int i = 0; i < s.length(); i++) {
        if (i + 1 == k) {
            ans = s[i];
            break;
        }
        if (s[i] != '1') {
            ans = s[i];
            break;
        }
    }
    cout << ans << endl;
}
