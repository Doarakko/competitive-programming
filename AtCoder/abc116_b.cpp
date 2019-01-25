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
    int s;
    cin >> s;
    
    set<int> st;
    st.insert(s);
    int pre_val = s, pre_n = 1, ans = -1;
    for (int i = 1; ; i++) {
        if (pre_val % 2 == 0) {
            st.insert(pre_val / 2);
            pre_val = pre_val / 2;
        }else{
            st.insert(pre_val * 3 + 1);
            pre_val = pre_val * 3 + 1;
        }
        if (pre_n == st.size()) {
            ans = i + 1;
            break;
        }
        pre_n = st.size();
    }
    cout << ans << endl;
}
