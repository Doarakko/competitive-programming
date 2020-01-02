#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int a = -1, z = -1;
    for (int i = 0; i < s.length(); i++) {
        if (a == -1 && s[i] == 'A') {
            a = i;
        }else if (s[i] == 'Z'){
            z = i;
        }
    }
    cout << z - a + 1 << endl;
    return 0;
}
