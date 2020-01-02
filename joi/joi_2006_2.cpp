#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    bool flag[30];
    pair<int, int> ans;
    
    //初期化
    for (int i = 0; i < 30; i++) {
        flag[i] = false;
    }
    ans.first = -1;
    ans.second = -1;
    
    //入力
    for (int i = 0; i < 28; i++) {
        cin >> x;
        flag[x-1] = true;
    }
    
    for (int i = 0; i < 30; i++) {
        if(ans.first == -1 && !flag[i]){                //1人目の未提出者の場合
            ans.first = i + 1;
        }else if(ans.second == -1 && !flag[i]){         //1人目の未提出者の場合
            ans.second = i + 1;
            break;
        }
    }
    //出力
    cout << ans.first << endl;
    cout << ans.second << endl;
    
    return 0;
}
