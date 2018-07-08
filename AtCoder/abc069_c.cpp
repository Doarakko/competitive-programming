#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    ll n, a;
    vector<ll> v;
    
    bool flag;
    ll cnt2, cnt4;
    
    //初期化
    cnt2 = 0;
    cnt4 = 0;
    
    //入力
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
        if (a % 4 == 0) {           //4の倍数の場合
            cnt4++;
        }else if(a % 2 == 0){       //2の倍数の場合
            cnt2++;
        }
    }
    //判定
    if (n % 2 == 0) {
        flag = cnt4 + cnt2 / 2 >= n / 2;
    }else{
        flag = cnt4 + cnt2 / 2 >= n / 2 - 1;
    }
    
    //出力
    if (flag) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
