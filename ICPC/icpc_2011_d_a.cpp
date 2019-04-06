#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    vector<bool> v1, v2;
    
    int cnt_n, cnt_2n, ans;
    
    while(cin >> n, n != 0){
        //初期化
        cnt_n = cnt_2n = 1;
        v1.clear();
        v2.clear();
        //1
        v1.push_back(false);
        //2~n
        for (int i = 1; i < n; i++) {
            v1.push_back(true);
        }
        //1
        v2.push_back(false);
        //2~n
        for (int i = 1; i < 2 * n; i++) {
            v2.push_back(true);
        }
        
        //エラトステネスの篩
        //1~nの素数の数
        for (int i = 1; i + 1 < sqrt(n); i++) {
            for (int j = i + (i + 1); j < n; j += (i + 1)) {
                if (j >= n) {         //範囲外
                    break;
                }
                v1[j] = false;
            }
        }
        //カウント
        for (int i = 0; i < n; i++) {
            if (v1[i] == true) {
                cnt_n++;
            }
        }
        
        //1~2nの素数の数
        for (int i = 1; i + 1 < sqrt(2 * n); i++) {
            for (int j = i + (i + 1); j < 2 * n; j += (i + 1)) {
                if (j >= 2 * n) {         //範囲外
                    break;
                }
                v2[j] = false;
            }
        }
        //カウント
        for (int i = 0; i < 2 * n; i++) {
            if (v2[i] == true) {
                cnt_2n++;
            }
        }
        
        //出力
        ans = cnt_2n - cnt_n;
        cout << ans << endl;
    }
    
    
    return 0;
}
