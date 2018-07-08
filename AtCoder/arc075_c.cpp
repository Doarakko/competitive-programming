#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    
    vector<int> v;
    int x;
    
    int sum;
    
    bool flag;
    
    //初期化
    sum = 0;
    flag = false;
    
    //入力
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    //昇順ソート
    sort(v.begin(), v.end());
    
    
    if (sum % 10 != 0) {            //10の倍数ではない場合
        cout << sum << endl;
    }else{                          //10の倍数の場合
        for (int i = 0; i < n; i++) {
            //v[i]が10の倍数ではない場合
            //sum = sumからv[i]を引いた値
            if (v[i] % 10 != 0) {
                sum -= v[i];
                flag = true;
                break;
            }
        }
        if (!flag) {
            sum = 0;
        }
        //出力
        cout << sum << endl;
    }
    
    return 0;
}
