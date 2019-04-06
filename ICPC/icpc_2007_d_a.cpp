#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, p;
    int max, min, sum, avg;
    
    while (cin >> n, n) {
        //初期化
        sum = 0;
        
        for (int i = 0; i < n; i++) {
            //入力
            cin >> p;
            
            sum += p;
            
            //1つ目の入力
            if(i == 0){
                min = p;
                max = p;
            }
            
            //最大値・最小値更新
            if(max < p){
                max = p;
            }else if(min > p){
                min = p;
            }
        }
        //平均の計算
        avg = (sum-(min + max)) / (n - 2);
        
        //出力
        cout << avg << endl;
    }
    
    return 0;
}
