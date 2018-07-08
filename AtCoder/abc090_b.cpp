#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int A, B;
    string s, t;
    cin >> A >> B;

    int cnt = 0;
    for (int i = A; i <= B; i++) {

        s = to_string(i);
        t = s;
        reverse(t.begin(), t.end());
        if (s == t) {
            cnt++;
        }

    }
    cout << cnt << endl;
    return 0;
}
