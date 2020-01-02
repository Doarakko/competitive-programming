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
    int n, a, b;
    cin >> n >> a >> b;
    
    vector<int> v(3);
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x <= a) {
            v[0]++;
        }else if (x >= a + 1 && x <= b){
            v[1]++;
        }else{
            v[2]++;
        }
    }
    
    vsort(v);
    cout << v[0] << endl;
}
