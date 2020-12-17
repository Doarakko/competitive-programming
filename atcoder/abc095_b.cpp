#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int N, x;
    ll X;
    cin >> N >> X;
    
    int min = 10000, cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> x;
        X -= x;
        if (x < min) {
            min = x;
        }
    }
    cnt = N;
    cnt += (X / min);
    cout << cnt << endl;
    
    return 0;
}
