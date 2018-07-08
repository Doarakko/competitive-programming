#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int N, M;
    cin >> N;
    string s;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> s;
        S[i] = s;
    }
    cin >> M;
    vector<string> T(M);
    for (int i = 0; i < M; i++) {
        cin >> s;
        T[i] = s;
    }
    int cnt, max = -1;
    //string max_s;
    for (int i = 0; i < N; i++) {
        cnt = 1;
        for (int j = i + 1; j < N; j++) {
            if (S[i] == S[j]) {
                cnt++;
            }
        }
        if (cnt > max) {
            for (int j = 0; j < M; j++) {
                if (S[i] == T[j]) {
                    cnt--;
                }
            }
            if (cnt > max) {
                //max_s = S[i];
                max = cnt;
            }
        }
    }
    if (max < 0) {
        max = 0;
    }
    cout << max << endl;
    return 0;
}

