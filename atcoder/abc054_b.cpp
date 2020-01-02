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

//#define ZERO(p) memset(p, 0, sizeof(p))
//#define MINUS(p) memset(p, -1, sizeof(p))
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
    cin >> n >> m;
    string s;
    vector<string> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    bool flag = false;
    for (int i = 0; i < n && !flag; i++) {
        for (int j = 0; j < n && !flag; j++) {
            if (a[i][j] == b[0][0]) {
                flag = true;
                for (int k = 0; k < m && flag; k++) {
                    for (int l = 0; l < m && flag; l++) {
                        if (i + k < n && j + l < n) {
                            if (a[i+k][j+l] != b[k][l]) {
                                flag = false;
                            }
                        }else{
                            flag = false;
                        }
                    }
                }
            }
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
