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
    string s;
    cin >> s;
    int x = 0, max = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'I') {
            x++;
        }else if (s[i] == 'D'){
            x--;
        }
        if (max < x) {
            max = x;
        }
    }
    cout << max << endl;
}
