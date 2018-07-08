#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    
    int n500, n100, n50, a[3] = {}, sum = 0, cnt = 0;
    n500 = X / 500;
    n100 = X / 100;
    n50 = X / 50;
    for (int i = 0; i <= n500 && i <= A; i++) {
        a[0] = (i * 500);
        for (int j = 0; j <= n100 && j <= B; j++) {
            a[1] = (j * 100);
            for (int k = 0; k <= n50 && k <= C; k++) {
                a[2] = (k * 50);
                sum = a[0] + a[1] + a[2];
                if (sum == X) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
