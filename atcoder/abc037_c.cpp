#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n, k, x;
    cin >> n >> k;
    vector<ll> v(n);
    ll sum[n], ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[i] = x;
        if (i == 0) {
            sum[i] = x;
        }else{
            sum[i] = sum[i-1] + x;
        }
    }
//    for (int i = 0; i < n; i++) {
//        cout << sum[i] << ' ';
//    }
//    cout << endl;
    for (int i = k - 1; i < n; i++) {
        if (i == k - 1) {
            ans += sum[i];
        }else{
            ans += sum[i] - sum[i-k];
        }
    }
    cout << ans << endl;
    return 0;
}
