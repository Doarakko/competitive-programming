#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    s.replace(0, 4, "2018");
    cout << s << endl;
    return 0;
}
