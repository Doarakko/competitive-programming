#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    ll n, x;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> x;
        a[i] = x;
    }
    sort(a, a+n);
    ll p = -1, q = -1;
    for (ll i = n - 1; i >= 1 && q == -1; i--) {
        if (a[i] == a[i-1] && p == -1) {
            p = a[i];
            i--;
        }else if(a[i] == a[i-1] && q == -1){
            q = a[i];
            i--;
        }
    }
    if (q != -1) {
        cout << p * q << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}
