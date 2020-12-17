#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>

#define X first
#define Y second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())
#define P pair

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

int main(int argc, const char *argv[]){
    bool x[3][3];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            x[i][j] = false;
        }
    }
    
    int a, b;
    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        x[a-1][b-1] = true;
        x[b-1][a-1] = true;
    }
    
    
    for (int i = 0; i < 3; i++) {
        
    }
    
}
