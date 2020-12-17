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

int main(int argc, const char *argv[]){
    int n, m;
    cin >> n >> m;
    vector<pair<ll, string>> v(m);
    pair<ll, string> p;
    for(int i = 0; i < m; i++){
        cin >> p.Y >> p.X;
        if(p.Y.length() < 6){
            string tmp = "";
            for (int i = 0; i < 6 - p.Y.length(); i++){
                tmp += '0';
            }
            p.Y = tmp + p.Y;
        }
        v[i] = p;
    }
    vsort(v);
    for(int i = 0; i < m; i++){
        cout << v[i].X << ' ' << v[i].Y << endl;
    }
}
