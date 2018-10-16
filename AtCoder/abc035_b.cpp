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
    int t;
    cin >> s >> t;
    int x = 0, y = 0, cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'L') {
            x--;
        }else if(s[i] == 'R'){
            x++;
        }else if (s[i] == 'U'){
            y++;
        }else if(s[i] == 'D'){
            y--;
        }else{
            cnt++;
        }
    }
    if (t == 1) {
        cout << max(max(abs(x-cnt)+abs(y), abs(x+cnt)+abs(y)), max(abs(x)+abs(y-cnt), abs(x)+abs(y+cnt))) << endl;
    }else{
        cout << min(min(abs(x-cnt)+abs(y), abs(x+cnt)+abs(y)), min(abs(x)+abs(y-cnt), abs(x)+abs(y+cnt))) << endl;
    }
}
