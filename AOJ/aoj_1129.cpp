#include <iostream>
using namespace std;

//配列
int main(){
    int N, r, p, c;
    int deck[50], top[50], bottom[50];
    
    while(cin >> N >> r, N || r){
        // 山札を初期化
        for (int i = 0; i < N; i++) {
            deck[i] = N - i;
        }
        
        // カット
        for (int i = 0; i < r; i++) {
            cin >> p >> c;
            
            // p-1 の部分を配列に格納
            for (int j = 0; j < (p - 1); j++) {
                top[j] = deck[j];
            }
            
            // c の部分を配列に格納
            for (int j = 0, k = (p - 1); j < c; j++, k++) {
                bottom[j] = deck[k];
            }
            
            // 配列 bottom を上へ
            for (int j = 0; j < c; j++) {
                deck[j] = bottom[j];
            }
            
            // 配列 top を下へ
            for (int j = c, k = 0; k < (p - 1); j++, k++) {
                deck[j] =top[k];
            }
        }
        // 出力
        cout << deck[0] << endl;
    }
}


