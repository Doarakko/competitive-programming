#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int a, b, sum = 0;
    bool flag = false;
    for (int i = 0; i < s.size()-1; i++) {
        a =  (s[i] - '0');
        b =  (s[i+1] - '0');
        if (!flag) {
            if (a + b < a - 1 + 9) {
                sum += a - 1;
                s[i] = a - 1 + '0';
                //s[i+1] = 9 + '0';
                flag = true;
            }else{
                sum += a;
            }
        }else{
            sum += 9;
            s[i] = 9 + '0';
        }
    }
    if (flag) {
        sum += 9;
    }else{
        sum += s[s.size()-1] - '0';
    }
    cout << sum << endl;
    return 0;
}
