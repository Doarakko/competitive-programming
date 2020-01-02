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
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = 0; i < b; i++) {
        if (a * (i + 1) % b == c) {
            flag = true;
            break;
        }
    }
    
    if (flag) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}
