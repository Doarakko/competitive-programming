#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    map<ll, bool> m;
    ll x, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        //cout << m[x] << endl;
        if (m[x]) {
            m[x] = false;
            cnt--;
        }else{
            m[x] = true;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
