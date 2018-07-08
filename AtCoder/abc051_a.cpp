#include <iostream>
using namespace std;

int main() {
    string s;
    
    //入力
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        //カンマをスペースに変換
        if (s[i] == ',') {
            s[i] = ' ';
        }
    }
    cout << s << endl;
    
    return 0;
}
