#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string x, y;
    
    cin >> x >> y;
    
    if (x[0] == 'S' && y[0] == 'H') {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}
