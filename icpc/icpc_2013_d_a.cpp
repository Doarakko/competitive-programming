#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int h, w;
    int line, cur, ans;
    //(first, second) = (高さ, 幅)
    pair<int, int> p;
    
    while (cin >> h >> w, h || w) {
        //初期化
        ans = -1;
        line = h * h + w * w;
        
        //h
        for (int i = 1; i <= 150; i++) {
            //w
            for (int j = i + 1; j <= 150; j++) {
                cur = i * i + j * j;
                if(line < cur || (line == cur && h < i)){
                    if (ans == -1) {        //初期化
                        ans = cur;
                        p.first = i;
                        p.second = j;
                    }else if(ans > cur){    //最小値更新
                        ans = cur;
                        p.first = i;
                        p.second = j;
                    }else if (ans == cur && p.first > i){       //高さを比較
                        ans = cur;
                        p.first = i;
                        p.second = j;
                    }
                }
            }
        }
        //出力
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}
