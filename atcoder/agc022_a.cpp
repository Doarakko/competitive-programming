#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int a[26] = {};
    for (int i = 0; i < s.length(); i++) {
        a[s[i]-'a'+0] = 1;
    }
    
    string al = "abcdefghijklmnopqrstuvwxyz";
    string ans = "-1";
    if (s.length() < 26) {
        for (int i = 0; i < 26; i++) {
            if (a[i] == 0) {
                ans = s + al[i];
                break;
            }
        }
    }else{
        string origin = s;
        bool flag = false;
        for (int i = 0; i < origin.length() && !flag; i++) {
            a[s[s.length()-1]-'a'+0] = 0;
            s.pop_back();
            for (int j = 0; j < 26 && !flag; j++) {
                if (a[j] == 0 && origin < s + al[j]) {
                    ans = s + al[j];
                    flag = true;
                }
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}
