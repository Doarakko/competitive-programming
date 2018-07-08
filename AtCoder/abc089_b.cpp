#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long long int N;
    cin >> N;
    string s;
    long long int a[5] = {0, 0, 0, 0, 0};
    for (long long int i = 0; i < N; i++) {
        cin >> s;
        if (s[0] == 'M') {
            a[0]++;
        }else if (s[0] == 'A'){
            a[1]++;
        }else if (s[0] == 'R'){
            a[2]++;
        }else if (s[0] == 'C'){
            a[3]++;
        }else if (s[0] == 'H'){
            a[4]++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (a[i] != 0) {
            cnt++;
        }
    }

    long long int sum = 0;
    if (cnt < 3) {
        cout << sum << endl;
    }else{
        for (int i = 0; i < 5; i++) {
            if (a[i] != 0) {
                for (int j = i + 1; j < 5; j++) {
                    if (a[j] != 0) {
                        for (int k = j + 1; k < 5; k++) {
                            if (a[k] != 0) {
                                long long int x;
                                x = a[i] * a[j] * a[k];
                                sum += x;
                            }
                        }
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
