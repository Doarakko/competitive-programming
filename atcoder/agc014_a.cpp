#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    int tmp_a, tmp_b, tmp_c;
    int cnt;
    bool flag;
    
    //初期化
    cnt = 0;
    flag = true;
    
    //入力
    cin >> a >> b >> c;
    
    //誰かが奇数個の場合
    if (!(a % 2 == 0 && b % 2 == 0 && c % 2 == 0)) {
        flag = false;
    }
    
    while (flag) {
        tmp_a = a;
        tmp_b = b;
        tmp_c = c;
        
        tmp_a = b / 2 + c / 2;
        tmp_b = a / 2 + c / 2;
        tmp_c = a / 2 + b / 2;
        
        if (tmp_a == a && tmp_b == b && tmp_c == c) {           //無限に続けられる場合
            cnt = -1;
            break;
        }else if (tmp_a % 2 == 0 && tmp_b % 2 == 0 && tmp_c % 2 == 0) { //全員偶数個の場合
            a = tmp_a;
            b = tmp_b;
            c = tmp_c;
        }else{                          //誰かが奇数個の場合
            flag = false;
        }
        cnt++;
    }
    //出力
    cout << cnt << endl;
    
    return 0;
}
