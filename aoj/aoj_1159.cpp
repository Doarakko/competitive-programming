#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, p;
    int num, sum;
    
    while (cin >> n >> p, n || p) {
        //初期化
        num = 0;
        sum = p;
        int player[n];
        for (int i = 0; i < n; i++) {
            player[i] = 0;
        }
        
        while (1) {
            if (sum != 0) {                       //碗に小石が入っている場合
                sum--;
                player[num]++;
                if(sum==0){
                    if (player[num]==p) {
                        break;
                    }
                }
            }else if (sum == 0) {                  // 碗が空の場合
                sum += player[num];
                player[num] = 0;
            }
            
            //次のプレイヤーへ
            num++;
            if (num == n) {
                num = 0;
            }
        }
        cout << num << endl;
    }
    
    return 0;
}
