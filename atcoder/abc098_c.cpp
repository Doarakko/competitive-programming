#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    ll n;
    string s;
    cin >> n >> s;
    ll a[n][4];
    for (int i = 0; i < 4; i++) {
        a[0][i] = 0;
    }
    for (ll i = 1; i < n; i++) {
        if (s[i] == 'E') {
            a[0][2]++;
        }else{
            a[0][3]++;
        }
    }
    /*
    for (int j = 0; j < 4; j++) {
        cout << a[0][j] << ' ';
    }
    cout << endl;
    */
    ll cnt, min = a[0][2];
    for (ll i = 1; i < n; i++) {
        if (s[i-1] == 'E') {
            a[i][0] = a[i-1][0] + 1;
            a[i][1] = a[i-1][1];
        }else{
            a[i][1] = a[i-1][1] + 1;
            a[i][0] = a[i-1][0];
        }
        if (s[i] == 'E') {
            a[i][2] = a[i-1][2] - 1;
            a[i][3] = a[i-1][3];
        }else{
            a[i][3] = a[i-1][3] - 1;
            a[i][2] = a[i-1][2];
        }
        
        if (i == n - 1) {
            cnt = a[i][1];
        }else{
            cnt = a[i][1] + a[i][2];
        }
        if(cnt < min){
            min = cnt;
        }
        /*
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << ' ';
        }
        cout << cnt << endl;
         */
    }
    cout << min << endl;
    return 0;
}
