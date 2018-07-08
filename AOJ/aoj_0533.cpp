#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> w, k;
    int x;
    
    int w_sum, k_sum;
    
    //入力
    for (int i = 0; i < 10; i++) {
        cin >> x;
        w.push_back(x);
    }
    //昇順ソート
    sort(w.begin(), w.end());
    
    //入力
    for (int i = 0; i < 10; i++) {
        cin >> x;
        k.push_back(x);
    }
    //昇順ソート
    sort(k.begin(), k.end());
    
    //各大学の上位3人の和
    w_sum = w[9] + w[8] + w[7];
    k_sum = k[9] + k[8] + k[7];
    
    //出力
    cout << w_sum << ' ' << k_sum << endl;
}
