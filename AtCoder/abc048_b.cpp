#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    ll a, b, x, cnt;
    cin >> a >> b >> x;
    cnt = b / x - a / x;
    if (a % x == 0) {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
