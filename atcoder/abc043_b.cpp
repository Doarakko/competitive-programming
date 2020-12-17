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
    string s, ans = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'B') {
            ans += s[i];
        }else if(ans.length() > 0){
            ans.erase(ans.length()-1);
        }
    }
    cout << ans << endl;
}
