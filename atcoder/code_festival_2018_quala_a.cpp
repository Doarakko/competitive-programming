#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, sum = 0, s;
    for (int i = 0; i < 3; i++) {
        cin >> a;
        sum += a;
    }
    cin >> s;
    if (sum <= s && sum + 3 >= s) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
