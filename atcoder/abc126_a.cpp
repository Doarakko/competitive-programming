#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    s[k - 1] = 'a' + s[k - 1] - 'A';
    cout << s << endl;
}
