#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x, a, b;
    
    //初期化
    a = 0;
    b = 0;
    //入力
    for (int i = 0; i < 4; i++) {
        cin >> x;
        a += x;
    }
    for (int i = 0; i < 4; i++) {
        cin >> x;
        b += x;
    }
    //出力
    if(a >= b){
        cout << a << endl;
    }else{
        cout << b << endl;
    }
    
    return 0;
}
