#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    ll x, max, min;
    max = -1;
    min = 10000000000;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > max) {
            max = x;
        }
        if(x < min){
            min = x;
        }
    }
    cout << abs(max - min) << endl;

    return 0;
}
