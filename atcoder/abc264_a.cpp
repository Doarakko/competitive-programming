#include <iostream>

using namespace std;
int main(int argc, const char *argv[])
{
    string s = "atcoder";

    int l, r;
    cin >> l >> r;

    cout << s.substr(l - 1, r - l + 1) << endl;
}
