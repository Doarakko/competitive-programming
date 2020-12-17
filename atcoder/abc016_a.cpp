#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int m, d;
    cin >> m >> d;
    if (m % d == 0) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
