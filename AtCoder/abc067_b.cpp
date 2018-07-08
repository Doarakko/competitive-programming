#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, K, l;
    vector<int> v;
    int sum;
    
    //初期化
    sum = 0;
    
    //入力
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> l;
        v.push_back(l);
    }
    //最大値計算
    //昇順ソート
    sort(v.begin(), v.end());
    //反転
    reverse(v.begin(), v.end());
    for (int i = 0; i < K; i++) {
        sum += v[i];
    }
    
    //出力
    cout << sum << endl;
    
    return 0;
}
