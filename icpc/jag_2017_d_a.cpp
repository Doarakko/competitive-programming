#include <iostream>
using namespace std;

int main() {
    int  N, M;
    int lst[110];
    
    int d, v;
    int sum;
    
    while (cin >> N >> M, N || M) {
        //初期化
        sum = 0;
        for (int i = 0; i < M; i++) {
            lst[i] = 0;
        }
        
        for (int i = 0; i < N; i++) {
            cin >> d >> v;
            //最大値更新
            if (lst[d-1] < v) {
                lst[d-1] = v;
            }
        }
        //和を計算
        for (int i = 0; i < M; i++) {
            sum += lst[i];
        }
        //出力
        cout << sum << endl;
    }
    
    
    return 0;
}
