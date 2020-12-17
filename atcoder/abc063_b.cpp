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

// a: 49

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int a[26] = {};
    bool flag = true;
    for (int i = 0; i < s.length(); i++) {
        a[s[i]-'0'-49]++;
        if (a[s[i]-'0'-49] >= 2) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}
