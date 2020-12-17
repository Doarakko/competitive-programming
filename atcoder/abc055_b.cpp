#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    long long ans;
    
    //初期化
    ans = 1;
    
    //入力
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        ans *= i;
        ans %= (10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 + 7);
    }
    cout << ans << endl;
    
    return 0;
}
