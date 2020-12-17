#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    char c;
    int a[4] = {0, 0, 0, 0};
    for (int i = 0; i < N; i++) {
        cin >> c;
        if (c == 'P') {
            a[0] = 1;
        }else if (c == 'W'){
            a[1] = 1;
        }else if (c == 'G'){
            a[2] = 1;
        }else if (c == 'Y'){
            a[3] = 1;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        if (a[i] == 1) {
            cnt++;
        }
    }
    if (cnt == 3) {
        cout << "Three" << endl;
    }else{
        cout << "Four" << endl;
    }
    return 0;
}
