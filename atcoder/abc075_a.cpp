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
    if (a == b) {
        cout << c << endl;
    }else if(a == c){
        cout << b << endl;
    }else{
        cout << a << endl;
    }
    return 0;
}
