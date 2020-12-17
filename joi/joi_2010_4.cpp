#include <iostream>
using namespace std;

int main() {
    int n, x;
    long long dp[101][21] = {};
    
    cin >> n;
    
    //DP
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        if(i == 0){
            dp[i][x] = 1;
        }else{
            for (int j = 0; j < 21; j++) {
                //足し算
                if (dp[i-1][j] != 0 && j + x <= 20) {
                    dp[i][j+x] += dp[i-1][j];
                }
                //引き算
                if(dp[i-1][j] != 0 && j - x >= 0){
                    dp[i][j-x] += dp[i-1][j];
                }
            }
        }
    }
    //n個目の入力
    cin >> x;
    //n-1個目の計算結果でn個目の入力と同じ値の個数
    cout << dp[n-2][x] << endl;
    
    return 0;
}

