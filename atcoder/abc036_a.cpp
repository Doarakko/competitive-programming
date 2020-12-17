#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <climits>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

//#define ZERO(p) memset(p, 0, sizeof(p))
//#define MINUS(p) memset(p, -1, sizeof(p))
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
    int a, b;
    cin >> a >> b;
    if (b % a == 0) {
        cout << b / a << endl;
    }else{
        cout << b / a + 1 << endl;
    }
}
