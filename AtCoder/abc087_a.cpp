#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int x, a, b;
    cin >> x >> a >> b;
    cout << (x - a) % b << endl;
    return 0;
}
