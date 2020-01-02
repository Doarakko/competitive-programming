#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    int a, b;
    int net[50][50];
    int sum;
    
    //初期化
    fill(net[0], net[50], 0);
    
    //入力
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        net[a-1][b-1]++;
        net[b-1][a-1]++;
    }
    
    for (int i = 0; i < n; i++) {
        //初期化
        sum = 0;
        //i市から各市への道路の和を計算
        for (int j = 0; j < n; j++) {
            sum += net[i][j];
        }
        //出力
        cout << sum << endl;
    }
    
    return 0;
}
