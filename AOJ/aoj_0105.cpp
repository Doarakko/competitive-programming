#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n;
    string s;
    // string = 語句
    // vector<int> = ページ番号
    map <string, vector<int>> list;
    map <string, vector<int>> :: iterator it;
    
    //入力
    while(cin >> s){
        cin >> n;
        list[s].push_back(n);
    }
    
    it = list.begin();
    for (; it != list.end(); it++) {
        //出力（語句）
        cout << (*it).first << endl;
        //ページ番号を昇順にソート
        sort((*it).second.begin(), (*it).second.end());
        //出力（ページ番号）
        for (int i = 0; i < (*it).second.size(); i++) {
            cout << (*it).second[i];
            if (i != (*it).second.size()-1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}
