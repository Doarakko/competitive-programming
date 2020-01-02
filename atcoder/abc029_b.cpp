#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    int cnt = 0;
    for (int i = 0; i < 12; i++) {
        cin >> s;
        if (s.find("r") != -1) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
