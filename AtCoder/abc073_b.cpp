#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int l, r, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        sum += r - l + 1;
    }
    cout << sum << endl;
    return 0;
}
