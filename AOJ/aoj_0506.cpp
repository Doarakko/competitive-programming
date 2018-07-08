#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, tmp;
    int n;
    int x, cnt;
    
    while(cin >> n, n){
        cin >> s;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < s.size(); j++) {
                x = s[j];
                cnt = 1;
                // r をカウント
                for (int k = j + 1; x == s[k]; k++, cnt++);
                // r
                tmp += to_string(cnt);
                // a
                tmp.push_back(x);
                // 文字列の位置を移動
                j += (cnt - 1);
            }
            s = tmp;
            // 初期化
            tmp.clear();
        }
        cout << s << endl;
    }
}
