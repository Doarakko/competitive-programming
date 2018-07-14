#include <iostream>
using namespace std;

static const int max_n = 50000;
static const int max_m = 20;

void display();

int n, m;
int type[max_m+1];
int dp[max_m+1][max_n+1];

int main() {
    
    //入力
    cin >> n >> m;
    
    type[0] = 0;
    for (int i = 1; i <= m; i++) {
        cin >> type[i];
    }
    
    //DP
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (j < type[i]) {                  //現在のコインの額面が, 現在の支払金額より大きい（に入らない）場合
                dp[i][j] = dp[i-1][j];
            }else{                              //現在のコインの額面が, 現在の支払金額より小さい（に入る）場合
                if (i == 1) {                   //コイン1の場合
                    dp[i][j] = dp[i][j-type[i]] + 1;
                }else{                          //コイン2~の場合
                    dp[i][j] = min(dp[i][j-type[i]] + 1, dp[i-1][j]);
                }
            }
        }
    }
    
    //出力
    cout << dp[m][n] << endl;
    
    return 0;
}


void display(){
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
