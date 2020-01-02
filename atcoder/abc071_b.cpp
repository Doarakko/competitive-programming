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
    string s;
    cin >> s;
    bool a[26] = {};
    for (int i = 0; i < s.length(); i++) {
//        cout << s[i] - '0' - 49 << endl;
        a[s[i]-'0'-49] = true;
    }
    string ans = "None";
    for (int i = 0; i < 26; i++) {
        if (!a[i]) {
            ans = 'a' + i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
