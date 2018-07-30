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
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}
