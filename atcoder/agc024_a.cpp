#include <iostream>
using namespace std;
using ll = long long;
int main(int argc, const char * argv[]) {
    ll a, b, c, k, x;
    cin >> a >> b >> c >> k;
    if (k % 2 == 0) {
        //x = - (a - b);
        x = a - b;
    }else{
        //x = a - b;
        x = - (a - b);
    }
    if (abs(x) > 1000000000000000000) {
        cout << "Unfair" << endl;
    }else{
        cout << x << endl;
    }
    
    return 0;
}
