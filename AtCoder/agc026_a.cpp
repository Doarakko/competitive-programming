#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[i] = x;
    }
    
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (v[i-1] == v[i]) {
            cnt++;
            v[i] = -1;
        }
        
    }
    cout << cnt << endl;
    return 0;
}
