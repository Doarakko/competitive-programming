#include <iostream>
using namespace std;

int main(){
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool flag = true;
    for(int i = 0; i < s.length() && flag; i++){
        if(i == a && !(s[i] == '-')){
            flag = false;
        }else if(i != a && !(s[i] >= '0' && s[i] <= '9')){
            flag = false;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
