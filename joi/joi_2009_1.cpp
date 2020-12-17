#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int sum, tmp;
    
    
    while (cin >> sum, sum) {
        //初期化
        tmp = 0;
        
        for (int i = 0; i < 9; i++) {
            cin >> tmp;
            sum -= tmp;
        }
        //　出力
        cout << sum << endl;
    }
    
    
    
    return 0;
}
