#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int x, y;
    int gx, gy;
    
    //入力
    cin >> x >> y;
    
    if(x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12){
        gx = 0;
    }else if(x == 4 || x == 6 || x == 9 || x == 11){
        gx = 1;
    }else{
        gx = 2;
    }
    
    if(y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12){
        gy = 0;
    }else if(y == 4 || y == 6 || y == 9 || y == 11){
        gy = 1;
    }else{
        gy = 2;
    }
    
    //出力
    if (gx == gy) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
