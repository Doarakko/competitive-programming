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
    vector<pair<int, int>> v(n);
    pair<int, int> p;
    for (int i = 0; i < n; i++) {
        cin >> p.second >> p.first;
        v[i] = p;
    }
    vsort(v);
    int pre = -1, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (pre <= v[i].S) {
            cnt++;
            pre = v[i].F;
        }
    }
    cout << cnt << endl;
    return 0;
}
