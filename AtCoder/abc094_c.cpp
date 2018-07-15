#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<pair<int, ll>> v(n);
    
    ll x;
    pair<ll, int> p;
    for (int i = 0; i < n; i++) {
        cin >> x;
        p .first = x;
        p.second = i;
        v[i] = p;
    }
    sort(v.begin(), v.end());
    
    // ソート後の位置を記録
    int a[n];
    for (int i = 0; i < n; i++) {
        a[v[i].second] = i;
    }
    // 除去前の中央値より左か右かで中央値を左右に1ずらす
    for (int i = 0; i < n; i++) {
        if (a[i] < n / 2) {
            cout << v[(n+1)/2+1-1].first << endl;
        }else{
            cout << v[(n+1)/2-1].first << endl;
        }
    }
    return 0;
}
