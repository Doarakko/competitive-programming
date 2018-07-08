#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    int a[4]={};
    
    //入力
    cin >> s;
    for (int i=0; i<5; i++) {
        if (s[i] == 'y') {
            a[0]++;
        }else if(s[i] == 'a'){
            a[1]++;
        }else if(s[i] == 'h'){
            a[2]++;
        }else if(s[i] == 'o'){
            a[3]++;
        }
    }
    //出力
    if(a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    
    return 0;
}
