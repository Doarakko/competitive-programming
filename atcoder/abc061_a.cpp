#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    
    //入力
    cin >> a >> b >> c;
    
    if(c >= a && c <= b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    
    
    return 0;
}
