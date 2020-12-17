#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    
    vector<int> map, dice;
    int x;
    
    int cnt, cur;

    while (cin >> n >> m, n || m) {
        //初期化
        cur = 0;
        cnt = 0;
        map.clear();
        dice.clear();
        
        //入力
        for (int i = 0; i < n; i++) {
            cin >> x;
            map.push_back(x);
        }
        for (int i = 0; i < m; i++) {
            cin >> x;
            dice.push_back(x);
        }
        
        for (int i = 0; i < m && cur < n; i++) {
            cnt++;
            //サイコロの出目
            cur += dice[i];
            //マスの指示
            cur += map[cur];
        }
        //出力
        cout << cnt << endl;
    }
    
    
    
    
    return 0;
}
