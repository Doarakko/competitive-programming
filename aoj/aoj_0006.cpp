#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    int i;
    
    //入力
    cin >> s;
    
    //反転
    reverse(s.begin(), s.end());
    
    //出力
    cout << s << endl;
}
