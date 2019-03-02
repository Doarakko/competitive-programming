#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0 || i % 3 == 0 || i % 15 == 0) {
            continue;
        }
        sum += i;
    }
    cout << sum << endl;
}
