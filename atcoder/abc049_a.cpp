#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    //母音
    if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'){   
        cout <<"vowel"<<endl;
    }
    //子音
    else{                                 
        cout <<"consonant"<<endl;
    }
    
    return 0;
}
