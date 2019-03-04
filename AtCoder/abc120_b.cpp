#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b, k;
    cin >> a >> b >> k;
    
    int cnt = 0, ans = -1;
    for (int i = min(a, b); i >= 0 && cnt != k; i--) {
        if (a % i == 0 && b % i == 0) {
            cnt++;
            ans = i;
        }
    }
    cout << ans << endl;
}
