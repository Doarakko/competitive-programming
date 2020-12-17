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

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    set<string> st;
    string s;
    char c = '1';
    bool flag = true;
    for (int i = 0; i < n; i++) {
        cin >> s;
        st.insert(s);
        if (i != 0 && (s[0] != c || st.size() != i + 1)) {
            flag = false;
        }
        c = s[s.length()-1];
    }
    if (flag) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
