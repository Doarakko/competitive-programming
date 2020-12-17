#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    string s, ans;
    
    stack<char> st;
    pair<int, int> cnt;
    
    //初期化
    cnt.first = cnt.second = 0;
    
    //入力
    cin >> n;
    cin >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        }else if(s[i] == ')'){
            if (st.empty()) {                   //空の場合
                cnt.first++;
            }else if (st.top() == ')') {        //"))"の場合
                cnt.first++;
            }else if(st.top() == '('){          //"()"の場合
                st.pop();
            }
        }
    }
    //空ではない場合
    //')'をサイズ分追加
    if (!st.empty()) {
        cnt.second = st.size();
    }
    
    //出力
    for (int i = 0; i < cnt.first; i++) {
        cout << '(';
    }
    cout << s;
    for (int i = 0; i < cnt.second; i++) {
        cout << ')';
    }
    cout << endl;
    
    return 0;
}
