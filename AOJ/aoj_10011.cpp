#include<iostream>
using namespace std;

int main(){
  int n, d[100];

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> d[i];
  }

  for(int j = n - 1; j >= 0; j--){
    cout << d[j];
    if(j != 0){
      cout << " ";
    }
  }
  cout << endl;

}


