#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b, c, k, s, t;
    cin >> a >> b >> c >> k;
    cin >> s >> t;
    
    int sum;
    if (s + t >= k) {
        sum = a * s + b * t - c * (s + t);
    }else{
        sum = a * s + b * t;
    }
    cout << sum << endl;
}
