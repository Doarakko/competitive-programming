#include <iostream>
#include <map>
using namespace std;

int main(){
    string s, len;
    //(first, second) = (単語, 出現回数)
    pair<string, int> fre;
    map <string,int> str;
    map <string,int> ::iterator it;
    
    while(cin >> s){
        str[s]++;
        //文字数最大の文字列の更新
        if (s.size() > len.size()) {
            len = s;
        }
    }

    //出現回数最大値の探索
    it = str.begin();
    for (; it != str.end(); it++) {
        //出現回数最大値の更新
        if ( (*it).second > fre.second ) {
            fre.first = (*it).first;
            fre.second = (*it).second;
        }
    }
    
    //出力
    cout << fre.first << " " << len << endl;
}
