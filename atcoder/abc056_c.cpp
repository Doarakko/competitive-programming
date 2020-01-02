#include <iostream>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    ll x, sum = 0, ans = -1;
    cin >> x;
    for (int i = 0; i <= x; i++) {
        sum += i;
        if (sum >= x) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
