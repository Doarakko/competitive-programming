#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + b > c + d) {
        cout << "Left" << endl;
    }else if (a + b < c + d){
        cout << "Right" << endl;
    }else{
        cout << "Balanced" << endl;
    }
    return 0;
}
