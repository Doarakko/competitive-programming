#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    
    vector<int> T(N), X(N), Y(N);
    int t, x, y;
    for (int i = 0; i < N; i++) {
        cin >> t >> x >> y;
        T[i] = t;
        X[i] = x;
        Y[i] = y;
    }
    
    bool flag = true;
    for (int i = 0; i < N; i++) {
        if (X[i] + Y[i] > T[i]) {
            flag = false;
            break;
        }else if ((X[i] + Y[i]) % 2 == 0 && T[i] % 2 != 0) {
            flag = false;
            break;
        }else if ((X[i] + Y[i]) % 2 == 1 && T[i] % 2 != 1) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
