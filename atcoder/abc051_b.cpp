#include <iostream>
using namespace std;

int main() {
    int k, s;
    int cnt;
    
    //初期化
    cnt = 0;
    
    //入力
    cin >> k >> s;
    
    for (int i = 0; i <= k; i++) {
        //組み合わせがない場合
        if (i > s) {
            break;
        }
        for (int j = 0; j <= k; j++) {
            //組み合わせがない場合
            if (i + j > s) {
                break;
            }
            //組み合わせがある場合
            if(s - (i + j) <= k){
                cnt++;
            }
        }
    }
    //出力
    cout << cnt << endl;
    
    return 0;
}
