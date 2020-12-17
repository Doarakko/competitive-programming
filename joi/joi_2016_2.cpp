#include <iostream>
using namespace std;

int main() {
    int n, m;
    int x, y;
    int tmp, sum, max, ans;
    
    //初期化
    sum = 0;
    max = 0;
    
    //入力
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        if(x < n){
            tmp = n - x;
            sum += tmp;
            //最大値更新
            if(tmp > max){
                max = tmp;
            }
        }
    }
    //合計から1番費用の高い景品を引く
    ans = sum - max;
    //出力
    cout << ans << endl;
    
    return 0;
}
