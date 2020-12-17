#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    if (a > 8 || b > 8) {
        cout << ":(" << endl;
    }else{
        cout << "Yay!" << endl;
    }
    
    return 0;
}
