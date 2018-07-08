#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    vector<int> v;
    int x;
    vector<int> tmp;
    
    //入力
    cin >> n >> m;
    
    //初期化
    for (int i = 0; i < n * 2; i++) {
        v.push_back(i + 1);
    }
    
    //シャッフル
    for (int i = 0; i < m; i++) {
        //初期化
        tmp.clear();
        
        //入力
        cin >> x;
        
        if (x == 0) {   //リアルシャッフル
            //コピー
            for (int j = 0; j < 2 * n; j++) {
                tmp.push_back(v[j]);
            }
            //初期化
            v.clear();
            for (int j = 0, k = 0, l = n; j < 2 * n; j++) {
                if (j % 2 == 0) {
                    v.push_back(tmp[k]);
                    k++;
                }else{
                    v.push_back(tmp[l]);
                    l++;
                }
            }
        }else{          //xでカット
            //コピー
            for (int j = 0; j < x; j++) {
                tmp.push_back(v[j]);
            }
            //0~(x-1)枚目をvにコピー
            for (int j = 0, k = x; k < 2 * n; j++, k++) {
                v[j] = v[k];
            }
            //x~(2*n-1)枚目をvにコピー
            for (int j = 2 * n - x, k = 0; j < 2 * n; j++, k++) {
                v[j] = tmp[k];
            }
        }

    }
    //出力
    for (int i = 0; i < n * 2; i++) {
        cout << v[i] << endl;
    }
    
    
    return 0;
}
