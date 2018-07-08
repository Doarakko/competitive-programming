#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, x;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> x;
        v[i] = x;
    }
    
    int a_p = 0, b_p = 0;
    bool flag = true;
    sort(v.begin(), v.end());
    for (int i = N-1; i >= 0; i--) {
        if (flag) {
            a_p += v[i];
            flag = false;
        }else{
            b_p += v[i];
            flag = true;
        }
    }
    cout << a_p - b_p << endl;
}

