#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    vector<int> v;
    int a;
    
    int sum;
    
    //入力
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    
    //初期化
    sum = 0;
    //昇順ソート
    sort(v.begin(), v.end());
    
    
    for (int i = 1; i < n; i++) {
        sum += (v[i] - v[i-1]);
    }
    //出力
    cout << sum << endl;
    
    return 0;
}
