#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    vector<int> v(N);
    int x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        v[i] = x;
    }
    sort(v.begin(), v.end());
    int cnt = 0, pre = -1;
    for (int i = 0; i < N; i++) {
        if (pre == -1) {
            cnt++;
        }else{
            if (v[i] > pre) {
                cnt++;
            }
        }
        pre = v[i];
    }
    cout << cnt << endl;
    return 0;
}
