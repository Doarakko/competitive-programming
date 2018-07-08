#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string w, ans;
    
    //入力
    cin >> w;
    for (int i = 0; i < w.size(); i++) {
        //母音以外のbaai
        if( !(w[i] == 'a' || w[i] == 'i' || w[i] == 'u' || w[i] == 'e' || w[i] == 'o') ){
            ans.push_back(w[i]);
        }
    }
    //出力
    cout << ans << endl;
    
    return 0;
}
