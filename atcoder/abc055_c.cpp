#include <iostream>
using namespace std;

int main() {
    long long n, m, ans;
    
    //入力
    cin >> n >> m;
    
    //s = 2 * c
    if (n >= m) {               //cよりsの数の方が大きい場合
        ans = m / 2;
    }else{
        if(m >= 2 * n){         //cが余る場合
            ans = n + (m - 2 * n) / 4;
        }else{                  //cが余る場合
            ans = m / 2;
        }
    }
    //出力
    cout << ans << endl;
    
    return 0;
}
