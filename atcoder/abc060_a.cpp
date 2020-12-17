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
    string a, b, c;
    cin >> a >> b >> c;
    if (a[a.length()-1] == b[0] && b[b.length()-1] == c[0]) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
