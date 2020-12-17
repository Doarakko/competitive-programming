#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int w, a, b;
    int ans;
    
    //入力
    cin >> w >> a >> b;
    
    if(a < b){
        ans = b - (a + w);
    }else{
        ans = a - (b + w);
    }
    if(ans < 0){
        ans = 0;
    }
    //出力
    cout << ans << endl;
    
    return 0;
}
