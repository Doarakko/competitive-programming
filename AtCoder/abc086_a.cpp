#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    if (a * b % 2 != 0) {
        cout << "Odd" << endl;
    }else{
        cout << "Even" << endl;
    }
    return 0;
}
