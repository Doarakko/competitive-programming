#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h;
    //(first, second) = (手, 結果)
    vector< pair<int,int> > v(5);
    pair<int,int> p;
    //グー, チョキ, パーの数
    bool r_flag, s_flag, p_flag;
    
    while (true) {
        //初期化
        v.clear();
        r_flag = false;
        s_flag = false;
        p_flag = false;
        
        //入力とカウント
        //1人目
        cin >> h;
        if(h == 0){
            break;
        }
        p.first = h;
        p.second = 3;
        v.push_back(p);
        if(h == 1){                 //グー
            r_flag = true;
        }else if (h == 2){          //チョキ
            s_flag = true;
        }else{                      //パー
            p_flag = true;
        }
        //2人目~
        for (int i = 1; i < 5; i++) {
            cin >> h;
            p.first = h;
            //あいこで初期化
            p.second = 3;
            v.push_back(p);
            if(h == 1){                 //グー
                r_flag = true;
            }else if (h == 2){          //チョキ
                s_flag = true;
            }else{                      //パー
                p_flag = true;
            }
        }
        
        //勝敗判定
        if(r_flag == false && s_flag == true && p_flag == true){
            for (int i = 0; i < 5; i++) {
                if (v[i].first == 2) {
                    v[i].second = 1;
                }else{
                    v[i].second = 2;
                }
            }
        }else if(r_flag == true && s_flag == false && p_flag == true){
            for (int i = 0; i < 5; i++) {
                if (v[i].first == 3) {
                    v[i].second = 1;
                }else{
                    v[i].second = 2;
                }
            }
        }else if(r_flag == true && s_flag == true && p_flag == false){
            for (int i = 0; i < 5; i++) {
                if (v[i].first == 1) {
                    v[i].second = 1;
                }else{
                    v[i].second = 2;
                }
            }
        }
        //出力
        for (int i = 0; i < 5; i++) {
            cout << v[i].second << endl;
        }
    }
}
