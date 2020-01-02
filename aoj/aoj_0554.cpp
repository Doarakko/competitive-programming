#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int sum, x;
    int m, s;
    
    //初期化
    sum = 0;
    
    //入力
    for (int i = 0; i < 4; i++) {
        cin >> x;
        sum += x;
    }
    
    //分
    m = sum / 60;
    //秒
    s = sum - m * 60;
    
    //出力
    cout << m << endl;
    cout << s << endl;
    
    return 0;
}
