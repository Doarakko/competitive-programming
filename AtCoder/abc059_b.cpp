#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string a, b;
    
    //入力
    //文字列で受け取って比較
    cin >> a >> b;
    
    if (a.length() > b.length()) {          //桁数の比較
        cout << "GREATER" << endl;
    }else if (a.length() < b.length()){     //桁数の比較
        cout << "LESS" << endl;
    }else{                                  //桁数が同じの場合
        if(a > b){
            cout << "GREATER" << endl;
        }else if (a < b){
            cout << "LESS" << endl;
        }else{
            cout << "EQUAL" << endl;
        }
    }
    
    
    return 0;
}
