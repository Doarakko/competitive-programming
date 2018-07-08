#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, d, n;
    int x, cnt;
    bool flag;
    
    while (cin >> a >> d >> n, a || d || n) {
        //初期化
        x = a;
        cnt = 0;
        
        while(cnt < n){
            flag = true;
            if(x != 0 && x != 1){
                for (int i = 2; i <= sqrt(x); i++) {
                    //素数ではない場合
                    if (x % i == 0) {
                        flag = false;
                        break;
                    }
                }
                //素数の場合
                if(flag == true){
                    cnt++;
                }
            }else if (x == 2){
                cnt++;
            }
            x += d;
        }
        //出力
        cout << x - d << endl;
    }
    
    return 0;
}
