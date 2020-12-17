#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c, d;
    int sum;
    //入力
    cin >> a >> b >> c >> d;
    //和
    sum = a * 1728 + b * 144 + c * 12 + d;
    //出力
    cout << sum << endl;
    
    return 0;
}


