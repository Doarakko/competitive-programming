#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    vector<string> s(n);
    vector<int> p(n);
    int sum = 0, max = -1, max_idx = -1;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> p[i];
        sum += p[i];
        
        if (p[i] > max) {
            max = p[i];
            max_idx = i;
        }
    }
    
    if (max * 2 > sum) {
        cout << s[max_idx] << endl;
    }else{
        cout << "atcoder" << endl;
    }
}
