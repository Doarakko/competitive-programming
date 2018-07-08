#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    if (n >= 1000) {
        cout << "ABD" << endl;
    }else{
        cout << "ABC" << endl;
    }
    return 0;
}
