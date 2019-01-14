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
    vector<int> v(4);
    int a;
    bool flag = true;
    for (int i = 0; i < 4; i++) {
        cin >> a;
        if (a == 1) {
            v[0]++;
        }else if(a == 9){
            v[1]++;
        }else if(a == 7){
            v[2]++;
        }else if(a == 4){
            v[3]++;
        }else{
            flag = false;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (v[i] != 1) {
            flag = false;
        }
    }
    if (flag) {
        cout << "YES" << endl;
    }else{
        cout << "NO"<< endl;
    }
}
