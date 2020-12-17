#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    int d, x, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> s >> d;

        if (d < a) {
            x = a;
        }else if(d >= a && d <= b){
            x = d;
        }else{
            x = b;
        }
        
        if (s == "East") {
            sum += x;
        }else{
            sum -= x;
        }
    }
    if (sum == 0) {
        cout << sum << endl;
    }else if (sum > 0) {
        cout << "East " << sum << endl; 
    }else{
        cout << "West " << - sum << endl;
    }
}
