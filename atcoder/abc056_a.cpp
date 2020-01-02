#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char a, b;
    
    //入力
    cin >> a >> b;
    
    if ( (a == 'H' && b == 'H') || (a == 'D' && b == 'D') ) {   //正直者
        cout << 'H' << endl;
    }else{                                                      //うそつき
        cout << 'D' << endl;
    }
    
    return 0;
}
