#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int cnt, cur, max, num;
    
    //初期化
    max = 0;
    num = 1;
    
    //入力
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        //初期化
        cur = i;
        cnt = 0;
        //カウント
        while (cur % 2 == 0) {
            cur /= 2;
            cnt++;
        }
        //最大値更新
        if (cnt > max) {
            max = cnt;
            num = i;
        }
    }
    
    //出力
    cout << num << endl;
    
    return 0;
}
