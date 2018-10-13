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
    pair<int, int> p1, p2;
    cin >> p1.X >> p1.Y >> p2.X >> p2.Y;
    if (p1.X == p2.X || p1.X == p2.Y || p1.Y == p2.X || p1.Y == p2.Y) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
