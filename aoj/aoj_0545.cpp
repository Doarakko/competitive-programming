#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a, b;
    int cnt;
    
    while (cin >> n >> m, n || m) {
        int net[n][n];
        bool flag[n];
        
        //初期化
        cnt = 0;
        for (int i = 0; i < n; i++) {
            flag[i] = false;
            for (int j = 0; j < n; j++) {
                net[i][j] = 0;
            }
        }
        
        //入力
        for (int i = 0; i < m; i++) {
            cin >> a >> b;
            net[a-1][b-1] = net[b-1][a-1] = 1;
        }
        
        //友達
        for (int i = 0; i < n; i++) {
            if (net[0][i] == 1) {
                flag[i] = true;
                //友達の友達
                for (int j = 0; j < n; j++) {
                    if (net[i][j] == 1) {
                        flag[j] = true;
                    }
                }
            }
        }
        //招待する人数の和
        for (int i = 0; i < n; i++) {
            if (flag[i]) {
                cnt++;
            }
        }
        //出力
        //自身を引く
        cout << cnt - 1 << endl;
    }
    
    return 0;
}
