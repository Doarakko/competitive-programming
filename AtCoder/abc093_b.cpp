#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long long int A, B;
    int K;
    cin >> A >> B >> K;
    
    long long int max, start, end;
    start = A;
    if (A + K > B) {
        end = B;
    }else{
        end  = A + K;
    }
    for (long long int i = start; i < end; i++) {
        cout << i << endl;
        max = i;
    }
    //cout << "-----" << endl;
    if(max >= B - K + 1){
        start = max + 1;
    }else{
        start = B - K + 1;
    }
    end = B;
    for (long long int i = start; i <= end; i++) {
        cout << i << endl;
    }
    
    return 0;
}
