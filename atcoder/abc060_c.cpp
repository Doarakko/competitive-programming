#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, t;
    cin >> n >> t;
    
    int x, y = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        
        if (x - y < t) {
            sum += x - y;
        }else{
            sum += t;
        }
        y = x;
        //cout << sum << endl;
    }
    //  i = 0 のときの t 
    sum += t;
    cout << sum << endl;
}
