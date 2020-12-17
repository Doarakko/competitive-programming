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
    ll a[n+1];
    a[0] = 2;
    a[1] = 1;
    for (int i = 2; i <= n; i++) {
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[n] << endl;
    return 0;
}
