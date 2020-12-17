#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    int j_cnt, i_cnt;
    int i;
    
    while (cin >> s) {
        //初期化
        //JOIの個数
        j_cnt = 0;
        //IOIの個数
        i_cnt = 0;
        i = 0;
        
        while (i + 2 < s.size()) {
            //i番目から1つずつずらしてチェック
            if (s.find("JOI", i) == i) {
                j_cnt++;
            }else if(s.find("IOI", i) == i){
                i_cnt++;
            }
            i++;
        }
        
        //出力
        cout << j_cnt << endl;
        cout << i_cnt << endl;
        
        //初期化
        s.clear();
    }
    
    return 0;
}
