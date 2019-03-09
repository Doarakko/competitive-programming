#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    double x, sum = 0;
    string u;
    for (int i = 0; i < n; i++) {
        cin >> x >> u;
        if (u == "JPY") {
            sum += x;
        }else{
            sum += x * 380000;
        }
    }
    cout << sum << endl;
}
