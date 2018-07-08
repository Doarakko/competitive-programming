#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    ll a, b, x;
    cin >> a >> b >> x;
    if (a == b || a < x) {
        cout << b / x - a / x << endl;
    }else{
        cout << b / x - a / x + 1 << endl;
    }
    
    return 0;
}
