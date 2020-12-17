#include <iostream>
#include <map>

using namespace std;

int main(){
    int id;
    double time;
    // double = time
    // int = 選手番号
    map <double, int> list1, list2, list3, list4;
    map <double, int> :: iterator it;
    pair<double, int> p;
    
    //入力
    //1組目
    for (int i = 0; i < 8; i++) {
        cin >> id;
        cin >> time;
        list1[time] = id;
    }
    //2組目
    for (int i = 0; i < 8; i++) {
        cin >> id;
        cin >> time;
        list2[time] = id;
    }
    //3組目
    for (int i = 0; i < 8; i++) {
        cin >> id;
        cin >> time;
        list3[time] = id;
    }
    
    //1組目の3位以下をlist4へ
    it = list1.begin();
    it++;
    it++;
    for (int i = 0; i < (8-2); i++) {
        p.first = (*it).first;
        p.second = (*it).second;
        list4.insert(p);
    }
    //2組目の3位以下をlist4へ
    it = list2.begin();
    it++;
    it++;
    for (int i = 0; i < (8-2); i++) {
        p.first = (*it).first;
        p.second = (*it).second;
        list4.insert(p);
    }
    //3組目の3位以下をlist4へ
    it = list3.begin();
    it++;
    it++;
    for (int i = 0; i < (8-2); i++) {
        p.first = (*it).first;
        p.second = (*it).second;
        list4.insert(p);
    }
    
   
    //1組目の1位と2位
    it = list1.begin();
    printf("%d %0.2lf\n", (*it).second, (*it).first);
    it++;
    printf("%d %0.2lf\n", (*it).second, (*it).first);
    
    //2組目の1位と2位
    it = list2.begin();
    printf("%d %0.2lf\n", (*it).second, (*it).first);
    it++;
    printf("%d %0.2lf\n", (*it).second, (*it).first);
    
    //3組目の1位と2位
    it = list3.begin();
    printf("%d %0.2lf\n", (*it).second, (*it).first);
    it++;
    printf("%d %0.2lf\n", (*it).second, (*it).first);
    
    //各組3位以下のうち, 1位と2位
    it = list4.begin();
    printf("%d %0.2lf\n", (*it).second, (*it).first);
    it++;
    printf("%d %0.2lf\n", (*it).second, (*it).first);
}
