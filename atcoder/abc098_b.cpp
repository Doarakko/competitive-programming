#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    string s;
    cin >> n >> s;
    string x, y;
    int cnt, max = 0;
    char pre = '0';
    for (int i = 1; i < n; i++) {
        x.clear();
        y.clear();
        cnt = 0;
        pre = '0';
        
        x = s.substr(0, i);
        y = s.substr(i, n - i);
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        //cout << x << ' ' << y;
        for (i = 0; i < x.length(); i++) {
            for (int j = 0; j < y.length() && pre != x[i]; j++) {
                if (x[i] == y[j]) {
                    pre = x[i];
                    cnt++;
                    break;
                }
            }
        }
        //cout << ' ' << cnt << endl;
        if (max < cnt) {
            max = cnt;
        }
        //sort(x.begin(), x.end());
    }
    cout << max << endl;
    return 0;
}
