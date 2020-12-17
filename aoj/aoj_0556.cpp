#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, K;
    int a, b;
    int ans;
    
    cin >> N >> K;
    for (int i = 0; i < K; i++) {
        //初期化
        ans = - 1;
        
        //入力
        cin >> a >> b;
        
        if (a <= N / 2) {                       //中心より左の場合
            if (b >= a && b <= N - a + 1) {     //正方形の左右の辺の場合
                ans = a % 3;
            }else{                              //正方形の上下の辺の場合
                if (b <= N / 2) {               //中心より上の場合
                    ans = b % 3;
                }else{                          //中心より下の場合
                    ans = (N - b + 1) % 3;
                }
            }
        }else{                                  //中心より右の場合
            if (b >= (N - a + 1) && b <= a) {   //正方形の左右の辺の場合
                ans = (N - a + 1) % 3;
            }else{                              //正方形の上下の辺の場合
                if (b <= N / 2) {               //中心より上の場合
                    ans = b % 3;
                }else{                          //中心より下の場合
                    ans = (N - b + 1) % 3;
                }
            }
        }
        //黄色の場合
        if (ans == 0) {
            ans = 3;
        }
        
        //出力
        cout << ans << endl;
    }
    
    return 0;
}
