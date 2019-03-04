#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a * c <= b) {
        cout << c << endl;
    }else{
        cout << b / a << endl;
    }
}
