#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, m, d;
    cin >> n >> m >> d;
    if (m == 12 && d == 25) {
        cout << n - 2018 << endl;
    }else{
        cout << "NOT CHRISTMAS DAY" << endl;
    }
}
