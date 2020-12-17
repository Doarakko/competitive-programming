#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int c, cnt;
    
    while (cin >> n, n) {
        //初期化
        cnt = 0;
        c = 1000 - n;
        
        cnt += c / 500;
        c %= 500;
        
        cnt += c / 100;
        c %= 100;
        
        cnt += c / 50;
        c %= 50;
        
        cnt += c / 10;
        c %= 10;
        
        cnt += c / 5;
        c %= 5;
        
        cnt += c / 1;
        c %= 1;
        //出力
        cout << cnt << endl;
    }
    
    return 0;
}
