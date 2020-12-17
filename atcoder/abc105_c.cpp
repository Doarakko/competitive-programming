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

// to_string()

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    ll n;
    cin >> n;
    string ans = "";
    if (n == 0) {
        ans = '0';
    }
    while (n != 0) {
        if (n % - 2 == 0) {
            ans += '0';
            n /= - 2;
        }else{
            ans += '1';
            if (n < 0) {
                n = n / - 2 + 1;
            }else{
                n = n / - 2;
            }
            
        }
        //cout << n << endl;
    }
    vrev(ans);
    cout << ans << endl;
}
