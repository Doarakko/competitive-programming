#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int m, n_min, n_max;

    vector<int> v;
    int x;
    
    int gap, num;
    
    while (cin >> m >> n_min >> n_max, m || n_min || n_max) {
        //初期化
        v.clear();
        gap = -1;
        num = -1;
        
        //入力
        for (int i = 0; i < m; i++) {
            cin >> x;
            v.push_back(x);
        }
        
        for (int i = n_min; i <= n_max; i++) {
            if (gap < v[i-1] - v[(i+1)-1]) {        //ギャップの更新
                gap = v[i-1] - v[(i+1)-1];
                num = i;
            }else if(gap == v[i-1] - v[(i+1)-1] && i > num){    //ギャップの更新（ギャップが同じ場合）
                gap = v[i-1] - v[(i+1)-1];
                num = i;
            }
        }
        //出力
        cout << num << endl;
    }
    
    return 0;
}
