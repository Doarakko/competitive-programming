#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <climits>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())


//INT_MAX
//INT_MIN
//LLONG_MAX
//LLONG_MIN
//DBL_MIN
//DBL_MAX
//LDBL_MIN
//LDBL_MAX

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    cin >> m;
    int p, x;
    vector<int> sum(m);
    for (int i = 0; i < m; i++) {
        sum[i] = 0;
        cin >> p >> x;
        for (int j = 0; j < n; j++) {
            if (j == p - 1) {
                sum[i] += x;
            }else{
                sum[i] += t[j];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        cout << sum[i] << endl;
    }
}
