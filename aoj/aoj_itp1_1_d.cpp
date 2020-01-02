#include<iostream>
using namespace std;

int main(){
  int S;
  int h, m, s;

  cin >> S;

  //時間
  h = S / (60 * 60);
  S %= (60 * 60);
  
  //分
  m = S / 60;
  S %= 60;

  //秒
  s = S;

  cout << h << ":" << m << ":" << s << endl;
}

