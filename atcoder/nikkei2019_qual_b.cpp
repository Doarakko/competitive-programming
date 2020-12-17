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
    int n;
    cin >> n;
    
    vector<string> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    
    int cnt = 0;
    set<char> st;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            st.insert(v[j][i]);
        }
        cnt += st.size() - 1;
        st.clear();
    }
    cout << cnt << endl;
}
