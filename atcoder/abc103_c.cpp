#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    ll x, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x - 1;
    }
//    vector<ll> v(n);
//    ll x, y = 1;
//    for (int i = 0; i < n; i++) {
//        cin >> x;
//        v[i] = x;
//        y *= x;
//    }
//    ll sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += (y - 1) % v[i];
//        //cout << i << ' ' << (y - 1) % v[i] << endl;
//    }
    cout << sum << endl;
    
    
    return 0;
}


