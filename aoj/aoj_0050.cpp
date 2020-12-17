#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main(){
    string s;
    vector<int> v;
    bool flag;
    
    //入力
    getline(cin,s);
    
    // apple を peach に変換
    // 変換した peach の位置を v に格納
    for (int i = 0; s.find("apple") != -1; i++) {
        v.push_back( s.find("apple") );
        s.replace(v[i], 5, "peach");
    }
    
    
    // peach を apple に変換
    for (int i = 0; s.find("peach", i) != -1; i += 5) {
        //初期化
        flag = false;
        
        // オリジナルか変換された peach かを判別
        i = s.find("peach", i);
        for (int j = 0; j <= i; j++){
            if (v[j] != i){					// オリジナルの peach の場合
                flag = true;
            }else{                          // 変換されたの peach の場合
                flag = false;
                break;
            }
        }
        // オリジナルの peach の場合
        if (flag){
            s.replace(i, 5, "apple");
        }
    }
    
    //出力
    cout << s << endl;
}
