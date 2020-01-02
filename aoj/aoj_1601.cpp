#include <iostream>
#include <vector>
using namespace std;

void cnt_initialize();
void cnt_display();

int cnt[5];
int main(int argc, const char * argv[]) {
    //入力
    int n;
    string s;
    //単語を格納
    vector<string> v;
    int tanku[5] = {5, 7, 5, 7, 7};
    //短句の先頭
    int start;
    
    while (cin >> n, n) {
        //入力
        for (int i = 0; i < n; i++) {
            cin >> s;
            v.push_back(s);
        }
        //初期化
        start = 0;
        cnt_initialize();
        v.clear();
        //探索
        for (int i = 0, j = 0; i < n && j < 5; i++) {
            cnt[j] += v[i].size();
            //cnt_display();
            if (cnt[j] == tanku[j]) {
                //短句の場合
                if (j == 4) {
                    break;
                }
                j++;
            }else if(cnt[j] > tanku[j]){            //短句ではない場合
                //初期化
                cnt_initialize();
                i = start;
                start++;
                j = 0;
            }
        }
        //出力
        cout << start + 1 << endl;
    }
    return 0;
}

void cnt_initialize(){
    for (int i = 0; i < 5; i++) {
        cnt[i] = 0;
    }
}

void cnt_display(){
    for (int i = 0; i < 5; i++) {
        cout << cnt[i] << ' ';
    }
    cout << endl;
}
