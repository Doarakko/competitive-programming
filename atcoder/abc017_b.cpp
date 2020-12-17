#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    char a[4] = {'c', 'o', 'k', 'u'};
    string x;
    cin >> x;
    x += "Z";
    
    bool flag = true;
    for (int i = 0; i < x.length() - 1 && flag; i++) {
        flag = false;
        for (int j = 0; j < 4 && !flag; j++) {
            if (j == 0) {
                if(x[i] == a[j] && x[i+1] == 'h'){
                    flag = true;
                    i++;
                }
            }else{
                if (x[i] == a[j]) {
                    flag = true;
                }
            }
        }
    }
    if (flag) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
