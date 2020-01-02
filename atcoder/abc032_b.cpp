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
    string s, tmp;
    int k;
    cin >> s >> k;
    if (s.length() < k) {
        cout << 0 << endl;
        return 0;
    }
    set<string> st;
    for (int i = 0; i + k <= s.length(); i++) {
        tmp = s.substr(i, k);
        //        cout << tmp << endl;
        st.insert(tmp);
    }
    cout << st.size() << endl;
}
