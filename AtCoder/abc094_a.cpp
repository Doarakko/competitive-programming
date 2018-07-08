#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int a, b, x;
    cin >> a >> b >> x;
    if (b >= x - a && a <= x) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
