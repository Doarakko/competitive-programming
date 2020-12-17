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

// 最大公約数
ll gcd(ll x, ll y){
    ll r;
    
    // 引数チェック
    if(x == 0 || y == 0){
        return 0;
    }
    
    // ユーグリッドの互除法
    // yで割り切れるまでループ
    while((r = x % y) != 0){
        x = y;
        y = r;
    }
    return y;
}

int main(int argc, const char * argv[]) {
    ll n, x, a, ans = -1, now;
    cin >> n >> x;
    for (ll i = 0; i < n; i++) {
        cin >> a;
        now = abs(x - a);
        if (i == 0) {
            ans = now;
        }else{
            ans = gcd(ans, now);
        }
    }
    cout << ans << endl;
    
}

