#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    int a[3] = {};
    cin >> s;
    for (int i = 0; i < 3; i++) {
        if (s[i] == 'a') {
            a[0] = 1;
        }else if (s[i] == 'b') {
            a[1] = 1;
        }else if (s[i] == 'c') {
            a[2] = 1;
        }
    }
    bool flag = true;
    for (int i = 0; i < 3; i++) {
        if (a[i] != 1) {
            flag = false;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
