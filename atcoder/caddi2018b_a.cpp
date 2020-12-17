#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '2') {
            cnt++;
        }
    }
    cout << cnt << endl;
}
