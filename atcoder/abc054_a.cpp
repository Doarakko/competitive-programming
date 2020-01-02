#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    
    //入力
    cin >> a >> b;
    
    //2 < 3 < 4 < 5 < 6 < 7 < 8 < 9 < 10 < 11 < 12 < 13 < 1
    //1とそれ以外で場合分け
    if(a == 1 || b == 1){
        if(a == 1 && b == 1){
            cout << "Draw" << endl;
        }else if(a == 1){
            cout << "Alice" << endl;
        }else{
            cout << "Bob" << endl;
        }
    }else{
        if(a > b){
            cout << "Alice" << endl;
        }else if(a < b){
            cout << "Bob" << endl;
        }else{
            cout << "Draw" << endl;
        }
    }
    
    return 0;
}
