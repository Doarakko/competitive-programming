#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    string a, b;
    
    int ans;
    
    //初期化
    ans = -1;
    
    //入力
    cin >> s;
    
    for (int i = 0; ans == -1; i++) {
        //1文字削除
        s.pop_back();
        //サイズが偶数の場合
        if (s.size() % 2 == 0) {
            //初期化
            a.clear();
            b.clear();
            
            a = s.substr(0, s.size()/2);
            b = s.substr(s.size()/2, s.size()/2);
            //偶文字列の場合
            if (a == b) {
                ans = s.size();
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}
