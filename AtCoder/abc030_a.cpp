#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b / a > d / c) {
        cout << "TAKAHASHI" << endl;
    }else if(b / a < d / c){
        cout << "AOKI" << endl;
    }else{
        cout << "DRAW" << endl;
    }
}
