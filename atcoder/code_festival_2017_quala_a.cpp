#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    
    //入力
    cin >> s;
    //出力
    if (s.find("YAKI") == 0) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
