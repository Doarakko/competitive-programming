#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define X first
#define Y second
#define vsort(v) sort(v.begin(), v.end())
#define vrev(v) reverse(v.begin(), v.end())
#define P pair

using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    int n;
    cin >> s >> n;
    cout << s[(n-1)/5] << s[(n-1)%5] << endl;
}
