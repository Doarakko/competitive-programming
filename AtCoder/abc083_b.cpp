#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    ll N;
    int A, B;
    cin >> N >> A >> B;

    string s;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        int tmp = 0;
        s = to_string(i);
        for (int j = 0; j < s.length(); j++) {
            tmp += (s[j] - '0');
        }
        //cout << tmp << endl;
        if (tmp >= A && tmp <= B) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
