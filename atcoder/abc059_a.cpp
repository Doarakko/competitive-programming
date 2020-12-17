#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string a, b, c;
    char x;
    
    //入力
    cin >> a >> b >> c;
    
    //1単語目
    x = a[0] - 32;
    cout << x;
    
    //2単語目
    x = b[0] - 32;
    cout << x;
    
    //3単語目
    x = c[0] - 32;
    cout << x;
    cout << endl;
    
    return 0;
}
