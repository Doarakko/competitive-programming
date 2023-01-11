#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    if (s[s.length() - 1] == 'T')
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
