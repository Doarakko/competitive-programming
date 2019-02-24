#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>

#define X first
#define Y second
#define vsort(v) sort(v.begin(), v.end())
#define vrev(v) reverse(v.begin(), v.end())
#define P pair
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    
    int ans;
    
    // 赤
    for (int i = 0; ; i++) {
        if (a + i == 9) {
            a = -1;
        }
        if (a + i == b) {
            ans = i;
            break;
        }
    }
    
    // 青
    for (int i = 0; ; i++) {
        if (a + i == 0) {
            a = 10;
        }
        if (a - i == b) {
            ans = min(ans, i);
            break;
        }
    }
    cout << ans << endl;
    
    
    int n;
    cin >> n;
    cout << 2010 + n * 4 << endl;
}
