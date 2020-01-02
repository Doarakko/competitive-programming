#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    ll n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n << endl;
    }else{
        cout << n * 2 << endl;
    }
    return 0;
}
