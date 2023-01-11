#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (!(s[i] == s[s.length() - 1 - i] || s[i] == '*' || s[s.length() - 1 - i] == '*'))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
