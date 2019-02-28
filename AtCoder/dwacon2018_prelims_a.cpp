#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    if (s.substr(0, 2) == s.substr(2, 2)) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
