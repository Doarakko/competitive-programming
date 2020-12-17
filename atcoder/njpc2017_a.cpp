#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int l;
    string s;
    cin >> l >> s;
    if (s.length() <= l) {
        cout << s << endl;
    }else{
        cout << s.substr(0, l) << endl;
    }
}
