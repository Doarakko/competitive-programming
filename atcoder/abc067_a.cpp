#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    
    //入力
    cin >> a >> b;
    
    //出力
    if (a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0) {
        cout << "Possible" << endl;
    }else{
        cout << "Impossible" << endl;
    }
    
    return 0;
}
