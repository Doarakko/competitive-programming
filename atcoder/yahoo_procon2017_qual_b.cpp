#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n, k;
    vector<long long> v;
    long long x;
    long long sum, num;
    //入力
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    //昇順ソート
    sort(v.begin(), v.end());
    
    //初期化
    sum = 0;
    num = k - 1;
    //k個の商品を額の大きい順に落札
    for (int i = 0; i < k; i++, num--) {
        sum += v[num] + i;
    }
    cout << sum << endl;
    
    return 0;
}
