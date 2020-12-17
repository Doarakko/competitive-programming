#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<string> phone(10);
    //入力
    int n;
    string s;
    //連続する数字の数
    int cnt;
    //(first, second) = (番号, 回数)
    pair<int, int> num;
    //出力するメッセージ
    string mes;
    
    //初期化
    phone[0] = "-1";
    phone[1] = ".,!? ";
    phone[2] = "abc";
    phone[3] = "def";
    phone[4] = "ghi";
    phone[5] = "jkl";
    phone[6] = "mno";
    phone[7] = "pqrs";
    phone[8] = "tuv";
    phone[9] = "wxyz";
    
    //入力
    cin >> n;
    for (int i = 0; i < n; i++) {
        //初期化
        mes.clear();
        //入力
        cin >> s;
        for (int j = 0; j < s.size();) {
            if (s[j] == '0') {
                j++;
            }else{
                //初期化
                cnt = 1;
                for (int k = j + 1; k < s.size() && s[k] != '0'; k++) {
                    cnt++;
                }
                //番号
                num.first = s[j]-'0';
                //押した回数
                num.second = cnt % phone[s[j]-'0'].size() - 1;
                if (num.second < 0) {
                    num.second = phone[s[j]-'0'].size() - 1;
                }
                //出力するメッセージを更新
                mes += phone[num.first][num.second];
                //cout << cnt << endl;
                j += (cnt + 1);
            }
        }
        //出力
        cout << mes << endl;
    }
    
    return 0;
}
