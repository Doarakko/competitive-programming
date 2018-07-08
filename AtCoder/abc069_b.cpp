#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;

    //入力
    cin >> s;
    
    //出力
    cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
    
    return 0;
}
