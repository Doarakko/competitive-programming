#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int x;
    vector<int> t, h;
    
    //場のカード
    int f;
    //太郎の出した枚数, 花子の出した枚数
    int t_cnt, h_cnt;
    int t_score, h_score;
    
    while (cin >> n, n) {
        int c[2*n];
        
        //初期化
        t.clear();
        h.clear();
        //花子のカードとして初期化
        for (int i = 0; i < 2 * n; i++) {
            c[i] = -1;
        }
        
        //太郎のカード
        for (int i = 0; i < n; i++) {
            cin >> x;
            c[x-1] = 1;
        }
        //太郎と花子の手札を作成
        for (int i = 0; !(t.size() == n && h.size() == n) && i < 2 * n; i++) {
            if (c[i] == 1) {
                t.push_back(i + 1);
            }else{
                h.push_back(i + 1);
            }
        }
        //昇順ソート
        sort(t.begin(), t.end());
        sort(h.begin(), h.end());
        
        //初期化
        f = 0;
        t_cnt = 0;
        h_cnt = 0;
        
        for (int i = 0; !(t_cnt == n || h_cnt == n); i++) {
            if (i % 2 == 0) {                       //太郎の手番
                for (int j = 0; j < n; j++) {
                    //出せる場合
                    if (f < t[j]) {
                        //更新
                        f = t[j];
                        t_cnt++;
                        //使用済み
                        t[j] = -1;
                        break;
                    }
                    //パス
                    if(j == n - 1){
                        //初期化
                        f = 0;
                        break;
                    }
                }
            }else{                                  //花子の手番
                for (int j = 0; j < n; j++) {
                    //出せる場合
                    if (f < h[j]) {
                        //更新
                        f = h[j];
                        h_cnt++;
                        //使用済み
                        h[j] = -1;
                        break;
                    }
                    //パス
                    if(j == n - 1){
                        //初期化
                        f = 0;
                        break;
                    }
                }
            }
            //cout << "f:" << f << endl;
        }
        t_score = n - h_cnt;
        h_score = n - t_cnt;
        //出力
        cout << t_score << endl;
        cout << h_score << endl;
    }
    
    return 0;
}
