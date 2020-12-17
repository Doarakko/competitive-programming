#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    
    int a[6] = {};
    for (int i = 0; i < s.length(); i++) {
        // cout << s[i]-'0' << endl;
        a[s[i]-'0'-17]++;
    }
    
    for (int i = 0; i < 6; i++) {
        cout << a[i];
        if (i != 6) {
            cout << " ";
        }else{
            cout << endl;
        }
    }
}
